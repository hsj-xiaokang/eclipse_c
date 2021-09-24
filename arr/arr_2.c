#include <stdio.h>
#include <stdlib.h>
#include "arr_2.h"

//二维数组测试
void tets_arr_2(){
//   int a[] = {1,2};
//   int b[] = {3,4};
//   初始化
//  （数组里面全是地址）指针数组
//	 int *arr2[2] = {a,b};
   int arr2[2][3]= {{1,2,3},{3,4,5}};
   printf("a index 0:%d\n", arr2[0][0]);
   printf("a index 1:%d\n", arr2[0][1]);
   printf("b index 0:%d\n", arr2[1][0]);
   printf("b index 1:%d\n", arr2[1][1]);


   //本表面上是数组指针；
   ///////使用按照数组指针理解//////
   int (*a2p)[3] = arr2;

   //从数组指针角度使用（二维数组）
   printf("(pointer) a index 0:%d\n", a2p[0][0]);
   printf("(pointer) a index 1:%d\n", a2p[0][1]);
   printf("(pointer) b index 0:%d\n", a2p[1][0]);
   printf("(pointer) b index 1:%d\n", a2p[1][1]);

   //从数组指针角度使用，见：pointer_s.h、pointer_s.c
   printf("（数组里面全是指针）取arr2->b第二个,%d,%d,%d,%d\n",(*(a2p+1))[1],a2p[1][1],*(a2p[1]+1),*((*(a2p+1))+1));
}
