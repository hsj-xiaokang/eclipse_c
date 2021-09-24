//
// Created by hsj on 2021/9/23.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<time.h>
#include<sys/time.h>
#include <stdint.h>
#include <unistd.h>
#include "../f_time/f_time.h"

#ifndef ECLIPSE_C_OP_FILE_H
#define ECLIPSE_C_OP_FILE_H
//最大字符
#define maxlen 100

//文件操作测试
void test_op_file_func();
//创建文件
void create_file_test(char *file_path_name);
//打开文件
FILE *open_file_test(char *file_path_name);

#endif //ECLIPSE_C_OP_FILE_H
