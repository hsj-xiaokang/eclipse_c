/*************************************************************************
   C语言多线程编程
   https://www.cnblogs.com/zzdbullet/p/9526130.html
   多线程的同步与互斥

   在使用semaphore之前，我们需要先引入头文件#include <semaphore.h>

	初始化信号量： int sem_init(sem_t *sem, int pshared, unsigned int value);
		成功返回0，失败返回-1
		参数
		sem：指向信号量结构的一个指针
		pshared： 不是0的时候，该信号量在进程间共享，否则只能为当前进程的所有线程们共享
		value：信号量的初始值
	信号量减1操作，当sem=0的时候该函数会堵塞 int sem_wait(sem_t *sem);
		成功返回0，失败返回-1
		参数
		sem：指向信号量的一个指针
	信号量加1操作 int sem_post(sem_t *sem);
		参数与返回同上
	销毁信号量 int sem_destroy(sem_t *sem);
		参数与返回同上

   方式二：信号量
         信号量，数据同步
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include "pthread_semaphore_c_2.h"

#define MAXSIZE 10

int stack[MAXSIZE];
int size = 0;
//信号量
sem_t sem;

// 生产者
void provide_data(void) {
    int i;
    for (i=0; i< MAXSIZE; i++) {
        stack[i] = i;
        sem_post(&sem); //为信号量加1
    }
}

// 消费者
void handle_data(void) {
    int i;
    while((i = size++) < MAXSIZE) {
        sem_wait(&sem);
        printf("乘法: %d X %d = %d\n", stack[i], stack[i], stack[i]*stack[i]);
    }
}

void test_pthread_semaphore_c_2(void) {

    pthread_t provider, handler;
    //信号量初始化
    sem_init(&sem, 0, 0);

    pthread_create(&provider, NULL, (void *)handle_data, NULL);
    pthread_create(&handler, NULL, (void *)provide_data, NULL);

    pthread_join(provider, NULL);
    pthread_join(handler, NULL);

    //销毁信号量
    sem_destroy(&sem);
}
