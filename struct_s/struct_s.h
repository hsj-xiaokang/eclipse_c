#include <stdio.h>

#ifndef __STRUCT_S_H__

#define __STRUCT_S_H__

//内容开始
struct MAN
	{
	    char* name;
		int id;
		int sex;//0未知，1男，2女
		int age;
		char* addr;
	};  //最后的分号千万不能省略

extern void test_struct();

//结构体数组
void test_struct_arr();
#endif
