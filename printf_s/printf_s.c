#include <stdio.h>
#include <stdlib.h>
#include "printf_s.h"
//printf参数压栈顺序从右到左
//在处理后置时：是将值放入临时量中，在输出时直接从临时量中取值
//在处理前置时：是等运算完成后，直接从I的地址中取值
void test_printf(){
	 int i=2;
	 printf("%d\n",i);
	 printf("%d,%d,%d,%d,\n",i++,++i,i,i++);
	 printf("%d\n",i);
}
