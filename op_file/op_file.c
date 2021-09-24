//
// Created by hsj on 2021/9/23.
//
#include "op_file.h"

//文件操作测试
void test_op_file_func(){
//    char* file_path_name = "I:\\eclipse-c\\op_file\\test.txt";
    char* file_path_name = "./op_file/test.txt";
    //创建文件
    create_file_test(file_path_name);
    //打开文件
    FILE *fp = open_file_test(file_path_name);

    //检测文件是否打开成功；
    if(!fp){
        printf("打开失败！\n");
        return; //返回异常
    }

    char str[maxlen];//缓冲区，用来储存数据
    while (1){
        //文件结束
        if(feof(fp)) {break;}
        //从文件中读取一行数据，储存到str开始的地址,最大长度为maxlen，然后下次读取从下行开始
        //如果该行的数据长于maxlen-1,则只能返回一个不完整的行，并下次调用时从该处开始
        fgets(str,maxlen,fp);
        //检测结果
        printf("%s",str);
        //清空缓冲区
        memset(str,0,sizeof str);
    }

    //记录结束时间
    struct tm *fTm = current_date_time();
//    printf("格式化时间:yyyy-MM-dd HH:mm:ss:%s",sprintf_time(fTm));
    fputs(sprintf_time(fTm), fp);
    //记得用完关闭文件
    fclose(fp);
}

//创建文件
void create_file_test(char *file_path_name){
    FILE *fp = NULL;
    //使用“读入”方式打开文件
    fp = fopen(file_path_name, "r");
    //如果文件不存在
    if (fp == NULL){
        //使用“写入”方式创建文件
        fp = fopen(file_path_name, "w+");
    }
    // 逗号之前是一个指针，表明往里面输入。逗号之后fprintf是往文件里面输入
//    fprintf(fp, "逗号之前是一个指针，表明往里面输入。逗号之后fprintf是往文件里面输入:This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
    //记得用完关闭文件
    fclose(fp);
}

//打开文件
FILE *open_file_test(char *file_path_name){
    FILE *fp = NULL;
    //使用“读入”方式打开文件
    fp = fopen(file_path_name, "a+");
    return fp;
}