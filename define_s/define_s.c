#include "define_s.h"
#include <stdlib.h>

void define_test(){
	//char* x,y;[等价char* x,char y]
	PC x = "等价char* x",y = 'A';
	int z = 28;
	char w = 'B';
	printf("#define Pc char*: %s,%c\n",x,y);
	printf("int z=%d\n",z);
	printf("char w=%c\n",w);
}
