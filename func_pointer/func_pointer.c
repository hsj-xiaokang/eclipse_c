#include<stdlib.h>
#include<string.h>
#include "func_pointer.h"
//定义函数(普通)
int fpFunc(int x){
	printf("打印参数：%d，然后原样子返回\n",x);
	return x;
}

//指针函数
int *pfFunc(int x){
	//申请堆空间
	//记得释放，否则内存泄漏
	return (int *)malloc(sizeof(int) * x);
}

void test_fp(){
	    //fp就是函数指针
	    //typedef定义 使用
//	    fpd fp = pfFunc;//fpd fp = &pfFunc;

	    //fp就是函数指针
	    //函数指针定义 使用
		fp = pfFunc;//fpd fp = &pfFunc;

		int space = 3;
		int *pf = (*fp)(space);//直接调用：pfFunc(space)
		for(int i = 0;i < space;i++){
			pf[i] = i;
		}
		//函数指针，打印结果
		for(int i = 0;i < space;i++){
			printf("函数指针：%d\n",pf[i]);
		}
		//释放
		free(pf);
		///////////////////将0转换：指向返回值为void的函数指针（C缺陷与陷阱）///////////////////////////
		void(*v)();
		v = (void(*)())0;
		///////////////////将0转换并调用：指向返回值为void的函数指针;并调用（C缺陷与陷阱）///////////////////////////
//		(*(void(*)())0)();
		//等于下面
//		(*v)();
}
