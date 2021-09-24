/*
 ============================================================================
 Name        : define_s_2.c
 Author      : heshengjin
 Version     :
 Copyright   : just study for test
 Description : Hello World in C, Ansi-style 宏定义使用
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#include "define_s_2.h"

//实现函数test_define_s_2
//默认都是extern
int test_define_s_2(void) {

	    //宏定义测试
	    int sum = 20 + N;
	    printf("%d\n", sum);

	    //typedef测试
	    //表示 a、b 都是指向整型的指针变量。因为 INTP 是一个新的、完整的数据类型(不同于宏定义简单的替换)
	    INTP a,b;
	    a=b=&sum;

	    //a、b指向的地址（a、b的值）
	    printf("a contain addr is:%p\t b contain addr is:%p\t sum contain addr is:%p\n",a,b,&sum);
	    //a、b指向的地址的值
	    printf("a value is:%d\t b value is:%d\t sum value is:%d\n",*a,*b,sum);
	    //a、b自己的地址
	    printf("a self addr is:%p\t b self addr is:%p\t sum self addr is:%p\n",&a,&b,&sum);

	    return EXIT_SUCCESS;
}
