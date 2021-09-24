#include <stdio.h>
#include <pthread.h>
#include <stdint.h>
#include "thpool.h"

#ifndef __EXAMPLE__

#define __EXAMPLE__

// 测试线程池
extern void test_thpool_func();
// 任务
extern void task(void *arg);

#endif