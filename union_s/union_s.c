#include <stdio.h>
#include <stdlib.h>
#include "union_s.h"

void test_union(){
	//初始化值
	union DataEx my_data = {
			.i = 18,
			.x = 20.22,
            .str = "hsj is smart.",
	};
	printf("str is :%s\n",my_data.str);
	//space use is max:16
	printf("space use is max:%llu\n",sizeof(my_data));
}
