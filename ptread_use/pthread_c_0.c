/*************************************************************************
   C语言多线程编程
   https://www.cnblogs.com/zzdbullet/p/9526130.html
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "pthread_c_0.h"

void test_pthread_c_0()
{
    int tmp1, tmp2;
    void **retval1;
    void **retval2;
    //一个线程变量名，被创建线程的标识
    pthread_t thread1, thread2;
    //程序代码的参数
    char *message1 = "thread1";
    char *message2 = "thread2";

    //线程创建标识0成功，非0失败
    int ret_thrd1, ret_thrd2;

    // 线程的属性指针，缺省为NULL
    ret_thrd1 = pthread_create(&thread1, NULL, (void *)&print_message_function, (void *) message1);
    ret_thrd2 = pthread_create(&thread2, NULL, (void *)&print_message_function, (void *) message2);

    // 线程创建成功，返回0,失败返回失败号
    if (ret_thrd1 != 0) {
        printf("线程1创建失败\n");
    } else {
        printf("线程1创建成功\n");
    }

    if (ret_thrd2 != 0) {
        printf("线程2创建失败\n");
    } else {
        printf("线程2创建成功\n");
    }

    //同样，pthread_join的返回值成功为0
    tmp1 = pthread_join(thread1, (void **)&retval1);
    printf("thread1 return value(retval) is %d\n", &retval1);
    printf("thread1 return value(retval) is %d\n", retval1);
    printf("thread1 return value(tmp) is %d\n", tmp1);
    if (tmp1 != 0) {
        printf("cannot join with thread1\n");
    }
    printf("thread1 end\n");

    tmp2 = pthread_join(thread2, (void **)&retval2);
    printf("thread2 return value(retval) is %d\n", &retval2);
    printf("thread2 return value(retval) is %d\n", retval2);
    printf("thread2 return value(tmp) is %d\n", tmp1);
    if (tmp2 != 0) {
        printf("cannot join with thread2\n");
    }
    printf("thread2 end\n");

    printf("main thread end\n");

}

void print_message_function( void *ptr ) {
    for (int i = 0; i<15; i++) {
        printf("%s:%d\n", (char *)ptr, i);
    }
}

//int main(){
//	int *p;
//	int **pp;
//	int int_value = 18;
//	p = &int_value;
//	pp = &p;
//
//	printf("数值：%d\n",int_value);
//	printf("一级指针：%d\n",*p);
//	printf("二级指针：%d\n",**pp);
//
//	void *p;
//	void **pp;
//	int int_value = 18;
//	p = &int_value;
//	pp = &p;
//
//	printf("数值：%d\n",int_value);
//	printf("一级指针：%d\n",*(int*)p);
//	printf("二级指针：%d\n",**(int**)pp);
//	return EXIT_SUCCESS;
//}
