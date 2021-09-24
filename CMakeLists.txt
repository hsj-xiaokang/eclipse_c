cmake_minimum_required(VERSION 3.6)
project(eclipse_c C)

set(CMAKE_C_STANDARD 11)
#pthread配置
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads)

include_directories(arr)
include_directories(define_s)
include_directories(enum_s)
include_directories(func_pointer)
include_directories(pointer)
include_directories(printf_s)
include_directories(ptread_use)
include_directories(size_t_s)
include_directories(str)
include_directories(struct_s)
include_directories(typedef_s)
include_directories(union_s)
include_directories(thread_pool)
include_directories(primit_pointer)
include_directories(op_file)
include_directories(f_time)
include_directories(close_test)

add_executable(eclipse_c
        arr/arr.c
        arr/arr.h
        arr/arr_2.c
        arr/arr_2.h
        define_s/define_s.c
        define_s/define_s.h
        define_s/define_s_2.c
        define_s/define_s_2.h
        enum_s/enum_s.c
        enum_s/enum_s.h
        func_pointer/func_pointer.c
        func_pointer/func_pointer.h
        pointer/pointer_s.c
        pointer/pointer_s.h
        printf_s/printf_s.c
        printf_s/printf_s.h
        ptread_use/pthread_c_0.c
        ptread_use/pthread_c_0.h
        ptread_use/pthread_lock_c_1_1.c
        ptread_use/pthread_lock_c_1_1.h
        ptread_use/pthread_semaphore_c_2.c
        ptread_use/pthread_semaphore_c_2.h
        ptread_use/pthread_unlock_c_1.c
        ptread_use/pthread_unlock_c_1.h
        size_t_s/size_t.c
        size_t_s/size_t_s.h
        str/str_s.c
        str/str_s.h
        struct_s/struct_s.c
        struct_s/struct_s.h
        typedef_s/typedef_s.c
        typedef_s/typedef_s.h
        union_s/union_s.c
        union_s/union_s.h
        thread_pool/example.h
        thread_pool/example.c
        thread_pool/thpool.h
        thread_pool/thpool.c
        primit_pointer/pp.h
        primit_pointer/pp.c
        op_file/op_file.h
        op_file/op_file.c
        f_time/f_time.h
        f_time/f_time.c
        close_test/close_test.h
        close_test/close_test.c
        main_entry.c )
#pthread配置
target_link_libraries(eclipse_c ${CMAKE_THREAD_LIBS_INIT})