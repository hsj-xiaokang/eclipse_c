/*
 ============================================================================
 Name        : define_s_2.h
 Author      : heshengjin
 Version     :
 Copyright   : just study for test
 Description : Hello World in C, Ansi-style
              宏定义介绍，习惯大写字母表示；
              宏定义只是简单的字符串替换，由预处理器来处理【简单的替换】

              typedef 是在编译阶段由编译器处理的，它并不是简单的字符串替换，
              而给原有的数据类型起一个新的名字，将它作为一种【新的数据类型】。
 ============================================================================
 */
//没有定义才会定义这个头文件：__DEFINE_S_2_H__
#ifndef __DEFINE_S_2_H__

#define __DEFINE_S_2_H__

//宏定义，预处理时候替换（仅仅是简单的替换处理）
//当函数、超长表达式、if语句等，强制加上括号
//括号不能少,否则在宏展开以后可能会产生歧义
#define N 100

//新类型，不是简单的字符串替换
typedef int* INTP;

//定义函数test_002
extern int test_define_s_2(void);

#endif
