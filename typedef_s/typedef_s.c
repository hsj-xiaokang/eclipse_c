#include "typedef_s.h"

void typedef_test(){
	//char* x,y;[等价char* x,char* y]
	PC_NEW x = "等价char* x",y = "char* y";
	int z = 28;
	char w = 'B';
	printf("#define Pc char*: %s,%s\n",x,y);
	printf("int z=%d\n",z);
	printf("char w=%c\n",w);
}
