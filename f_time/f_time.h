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

#ifndef ECLIPSE_C_F_TIME_H
#define ECLIPSE_C_F_TIME_H
//yyyy-MM-dd HH:mm:ss-->19个长度
char ft[19];
//当前时间
struct tm *current_date_time();
//格式化时间:yyyy-MM-dd HH:mm:ss
char *sprintf_time(struct tm *fTm);
#endif //ECLIPSE_C_F_TIME_H
