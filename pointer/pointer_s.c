#include "pointer_s.h"

void pointer_test(){
	//测试指针8字节
	int a = 100;
	char* s = "我是字符串";
	int arr[6] = {1,2,3,4,5,6};
	int arr2[6] = {10,20,30,40,50,60};
	printf("pointer sizeof : %d\n",sizeof a);
	printf("pointer sizeof : %d\n",sizeof s);
	printf("pointer sizeof : %d\n",sizeof arr);

	//（指针指向数组地址）
	//数组指针
	int (*arr_p)[6] = &arr;
	//（数组里面全是地址）
	//指针数组
	int *p_arr[2] = {arr,arr2};

	//单指针int
	int *pi = arr;
	
	printf("（指针指向数组地址）取arr第二个,%d,%d,%d\n",(*arr_p)[1],(*arr_p)[1],*(*arr_p+1));
	printf("（数组里面全是指针）取arr2第二个,%d,%d,%d,%d\n",(*(p_arr+1))[1],p_arr[1][1],*(p_arr[1]+1),*((*(p_arr+1))+1));
	printf("（单指针指向数组地址）取arr第二个,%d\n",*(pi+1));

	//void *表示未知类型的指针
	//此时不知道数据类型占用内存字节大小，使用时候强转具体的指针类型
	void *v = &a;
	void *va = arr2;//等同于：&arr2[0]
	printf("void pointer:%d\n",*(int*)v);
	//
	printf("void pointer 取arr2第二个,%d,%d\n",*((*(int(*)[])va)+1),(*(int(*)[])va)[1]);


	int h = 88;
	char cs = 'A';
	int al[2] = {18,28};

	int *hp = &h;
	char *csp = &cs;
	int (*alp)[2] = &al;
	//一般指针
	printf("直接命中值：%d\n",*hp);
	printf("直接命中值：%c\n",*csp);
	//数组、字符串指针
	printf("间接命中值：%d,%d\n",(*alp)[0],*(*alp+1));
}
