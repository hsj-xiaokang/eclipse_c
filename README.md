## C语言精髓简练教程
-  一开始eclipse编写代码，最后CLion编写代码，名字eclipse_c的来源
   
   First eclipse writes the code, and finally CLion writes the code, from which the name eclipse_c comes

- 码云：[https://gitee.com/hsjjsh123/eclipse-c](https://gitee.com/hsjjsh123/eclipse-c)

我的C语言回顾（彻底理解C指针）
   何胜金，2021-04-29
   
   arr[数组]

   close_test[闭包测试]
   
   define_s[宏定义]
   
   enum_s[枚举]

   f_time[时间格式化]
   
   format[一般格式化]
   
   func_pointer[指针函数、函数指针]

   op_file[文件操作]
   
   pointer[指针、指针数组、数组指针]

   primit_pointer[基本数据类型与指针转换]

   printf_s[格式化打印]
   
   ptread_use[基础多线程使用]
   
   size_t_s[库函数定义size_t使用]
   
   struct_s[结构体]

   str[字符串]

   struct_s[结构体]

   thread_poll[线程池--linux信号量--linux系统下使用]
   
   typedef_s[typedef]
   
   union_s[联合]
   
   str[字符串、字符]

   main_entry.c程序入口函数
   
   指针数组-->最终强调目标指针 int *p[5]
   
   数组指针-->最终强调目标数组 int (*p)[5]
   

## 关于threadpool线程池 Run an example（只编译测试threadpool部分）
- 关于threadpool线程池,请使用linux编译。[https://github.com/Pithikos/C-Thread-Pool](https://github.com/Pithikos/C-Thread-Pool)：

The library is not precompiled so you have to compile it with your project. The thread pool
uses POSIX threads so if you compile with gcc on Linux you have to use the flag `-pthread` like this:

```shell
gcc main_entry.c ./thread_pool/example.c  ./thread_pool/thpool.c -D THPOOL_DEBUG -pthread -o main_entry
```
- 执行
```shell
./main_entry
```

## 使用cmake&make编译项目（全项目编译）
- make默认centos7已经安装（验证如下）
```shell
[root@wpuj3zui5est1ifj-0002 ~]# make -v
GNU Make 3.82
Built for x86_64-redhat-linux-gnu
Copyright (C) 2010  Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

[root@wpuj3zui5est1ifj-0002 ~]# cat /etc/os-release 
NAME="CentOS Linux"
VERSION="7 (Core)"
ID="centos"
ID_LIKE="rhel fedora"
VERSION_ID="7"
PRETTY_NAME="CentOS Linux 7 (Core)"
ANSI_COLOR="0;31"
CPE_NAME="cpe:/o:centos:centos:7"
HOME_URL="https://www.centos.org/"
BUG_REPORT_URL="https://bugs.centos.org/"

CENTOS_MANTISBT_PROJECT="CentOS-7"
CENTOS_MANTISBT_PROJECT_VERSION="7"
REDHAT_SUPPORT_PRODUCT="centos"
REDHAT_SUPPORT_PRODUCT_VERSION="7"
```
- 安装cmake
```shell
#下载Cmake
wget https://cmake.org/files/v3.6/cmake-3.6.2.tar.gz
#解压Cmake
tar xvf cmake-3.6.2.tar.gz && cd cmake-3.6.2/
#编译安装cmake
./bootstrap
gmake
gmake install
#查看编译后的cmake版本
/usr/local/bin/cmake --version
#移除原来的cmake版本
yum remove cmake -y
#新建软连接
ln -s /usr/local/bin/cmake /usr/bin/
#终端查看版本
cmake --version
#出现版本表示成功！cmake编译完成
[root@wpuj3zui5est1ifj-0002 cmake-3.6.2]# cmake --version
cmake version 3.6.2

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

- 编译
```shell
# 项目根目录执行
cmake CMakeLists.txt
# 项目根目录执行
make
```
- 运行
```shell
# 项目根目录执行
./eclipse_c
```