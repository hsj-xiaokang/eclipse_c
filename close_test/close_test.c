//
// Created by hsj on 2021/9/24.
//

#include "close_test.h"

//测试闭包
void* caller(){
    int cnt = 100;
    void callee(){
        cnt++;
        printf("%d\n", cnt);
    }
    return callee;
}