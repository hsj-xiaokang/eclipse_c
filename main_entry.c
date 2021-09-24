#include <stdio.h>
#include <stdlib.h>
#include "./arr/arr.h"
#include "./struct_s/struct_s.h"
#include "./define_s/define_s.h"
#include "./typedef_s/typedef_s.h"
#include "./size_t_s/size_t_s.h"
#include "./pointer/pointer_s.h"
#include "./define_s/define_s_2.h"
#include "./func_pointer/func_pointer.h"
#include "./ptread_use/pthread_c_0.h"
#include "./ptread_use/pthread_unlock_c_1.h"
#include "./ptread_use/pthread_lock_c_1_1.h"
#include "./ptread_use/pthread_semaphore_c_2.h"
#include "./enum_s/enum_s.h"
#include "./union_s/union_s.h"
#include "./str/str_s.h"
#include "./arr/arr_2.h"
#include "./printf_s/printf_s.h"
#include "./thread_pool/example.h"
#include "./primit_pointer/pp.h"
#include "./op_file/op_file.h"
#include "./f_time/f_time.h"
#include "./close_test/close_test.h"

int main() {
  // 测试数组
//  test_arr();
//	tets_arr_2();

  //测试结构体
//  test_struct();
//	test_struct_arr();

  //测试宏定义
//  define_test();
//  宏定义，使用外部的C文件：define_s_2.c
//	test_define_s_2();

  //测试typedef
//	typedef_test();

	//size_t
//	size_t_test();

	//指针
//	pointer_test();
//
//	//指针函数、指针函数
//	test_fp();

	//多线程
//	test_pthread_c_0();
//	test_pthread_unlock_c_1();
//	test_pthread_lock_c_1_1();
//	test_pthread_semaphore_c_2();
    test_thpool_func();

	//枚举
//	test_enum();

	//联合
//	test_union();

	//测试字符、字符串
//	test_str_chararr();

	//测试printf
//	test_printf();

//基本类型和指针类型转换
//    primit_refrence_test();

//文件操作测试
    test_op_file_func();

//测试闭包
    void(*callee)(void) = caller();
    callee();
  return EXIT_SUCCESS;
}

