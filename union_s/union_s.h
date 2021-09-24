#ifndef __UNION_S_H__
#define __UNION_S_H__
//定义联合
union DataEx {
	int i; //4Byte
	double x;//8Byte
	char str[16];//16Byte
};
//测试联合
void test_union();
#endif
