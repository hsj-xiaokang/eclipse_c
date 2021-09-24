#include <stdio.h>
/**
 * 函数指针
 * 指针函数
 */
#ifndef __FUNC_POINTER_H__

#define __FUNC_POINTER_H__
//定义函数(普通)
int fpFunc(int x);

//定义函数指针'fp'
int *(*fp)(int x);
typedef int *(*fpd)(int x);
//指针函数
int *pfFunc(int x);

//测试函数指针
void test_fp();
#endif
