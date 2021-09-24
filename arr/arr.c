#include "arr.h"
void test_arr(){
	  // 测试数组地址相关
	  int arr[] = {1,2,3,4,5,6,7,8,9,10};
	  printf("数组第一个元素的地址:%p,数组第二个元素的地址:%p\n",arr,&arr[1]);
	  printf("数组地址:%p,数组地址加1是未知地址:%p\n",&arr,(&arr+1));
	  printf("数组第一个元素的地址:%p,数组第二个元素的地址:%p\n",&arr[0],(&arr[0]+1));
}
