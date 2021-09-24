/*************************************************************************
   C语言多线程编程
   https://www.cnblogs.com/zzdbullet/p/9526130.html
   多线程的同步与互斥
   方式一：锁
         加锁，数据同步
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "pthread_lock_c_1_1.h"

static int sharedi = 0;

//锁
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void test_pthread_lock_c_1_1(){
	//	//线程创建标识0成功，非0失败
	int ret_thrd1, ret_thrd2, ret_thrd3;
    //一个线程变量名，被创建线程的标识
    pthread_t thrd1, thrd2, thrd3;
    //程序代码的参数
    char *message1 = "thread1";
    char *message2 = "thread2";
    char *message3 = "thread3";

    ret_thrd1 = pthread_create(&thrd1, NULL, (void *)increse_num, (void *) message1);
    ret_thrd2 = pthread_create(&thrd2, NULL, (void *)increse_num, (void *) message2);
    ret_thrd3 = pthread_create(&thrd3, NULL, (void *)increse_num, (void *) message3);

    pthread_join(thrd1, NULL);
    pthread_join(thrd2, NULL);
    pthread_join(thrd3, NULL);

    //最终的共享变量值
    printf("sharedi = %d\n", sharedi);

}

void increse_num(void *ptr) {
    /*加锁*/
    if (pthread_mutex_lock(&mutex) != 0) {
      perror("pthread_mutex_lock（加锁失败，退出程序）");
      //加锁失败，退出程序
      exit(EXIT_FAILURE);
    }
    long i,tmp;
    for(i=0; i<100000; i++) {
        tmp = sharedi;
        tmp = tmp + 1;
        sharedi = tmp;
        printf("%s:%lu\n", (char *)ptr, i);
    }
    /*解锁*/
	if (pthread_mutex_unlock(&mutex) != 0) {
		perror("pthread_mutex_unlock（解锁失败，退出程序）");
		//解锁失败，退出程序
		exit(EXIT_FAILURE);
	}
}
