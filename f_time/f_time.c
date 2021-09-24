//
// Created by hsj on 2021/9/23.
//

#include "f_time.h"

//当前时间:yyyy-MM-dd HH:mm:ss
struct tm  *current_date_time(){
    time_t curTime = time(NULL);
    struct tm *fTm = localtime(&curTime);
    return fTm;
}
//格式化时间:yyyy-MM-dd HH:mm:ss
char *sprintf_time(struct tm *fTm){
    //清空缓冲区
    memset(ft,0,sizeof ft);
    sprintf(ft, "%04d-%02d-%02d %02d:%02d:%02d\n",
            fTm->tm_year + 1900,
            fTm->tm_mon + 1,
            fTm->tm_mday,
            fTm->tm_hour,
            fTm->tm_min,
            fTm->tm_sec);
//    printf("格式化时间:yyyy-MM-dd HH:mm:ss:%s", f);
    return ft;
}