#include <stdio.h>
#include <stdlib.h>
#include "enum_s.h"

void test_enum(){
	 enum week w;
	 w = Wed;
	 printf("%d\n",w);
	 printf("////////////////////////////\n");
	 for (w = Mon; w <= Sun; w++)
	 {
		 printf("枚举元素：%d \n", w);
	 }
}
