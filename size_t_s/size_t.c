#include "size_t_s.h"

void size_t_test(){
	size_t number_4_price = 100;
	printf("%d\n",number_4_price);
	//取决于机器
	printf("%lu\n",sizeof number_4_price);
	  int n = 10;
	  //以下两种写法均正确
	  printf("%lu\n", sizeof (int));
	  printf("%lu\n", sizeof n);
}
