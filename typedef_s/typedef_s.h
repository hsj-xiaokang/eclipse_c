#include <stdio.h>

#ifndef __TYPEDEF_S_H__

#define __TYPEDEF_S_H__

//typedef,编译时进行处理，不是简单的替换，而是对类型说明符的重新命名。被命名的标识符具有类型说明的功能
typedef char* PC_NEW;

//定义了指向没有返回值的函数指针'funcptr'
typedef void (*funcptr)();

extern void typedef_test();

#endif
