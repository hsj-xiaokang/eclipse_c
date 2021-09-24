//
// Created by hsj on 2021/9/23.
//
#include "pp.h"

//基本类型和指针类型转换
void primit_refrence_test(){
    printf("/////////////////////////////////////////////////////\n");

    int primit = 100;
    void *pointer = (void*)primit;
    printf("基本类型--->指针类型转换:%d\n",(int)pointer);

    uintptr_t primit002 = 888;
    void *pointer002 = (void*)primit002;
    printf("(002)基本类型--->指针类型转换:%d\n",(uintptr_t)pointer002);

    printf("/////////////////////////////////////////////////////\n");

    int primit003 = 999;
    void *pointer003 = &primit003;
    printf("(003)基本类型--->指针类型转换:%d\n",*((int*)pointer003));

    uintptr_t primit004 = 1100;
    void *pointer004 = &primit004;
    printf("(004)基本类型--->指针类型转换:%d\n",*((uintptr_t*)pointer004));
}