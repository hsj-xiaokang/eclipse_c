#include "struct_s.h"
#include <string.h>

//匿名定义结构体，指定变量__CIXI__
struct
	{
	   char* name;
		int id;
		int sex;//0未知，1男，2女
		int age;
		char* love_things;
		char* addr;
	}  __CIXI__ = {"慈禧",3,2,28,"喜欢重用汉臣","大清国北京紫禁城"};  //最后的分号千万不能省略


void test_struct(){

	struct MAN yongzheng = {
			//初始化名字
			.name = "雍正",
	},
	qianlong = {
			//初始化名字
			.name = "乾隆",
	},
	huangtaiji ;
	//初始化数据
	yongzheng.id = 0;
//	yongzheng.name = "雍正";
	yongzheng.age = 28;
	yongzheng.sex = 1;
	yongzheng.addr = "大清国北京紫禁城乾清宫";

	qianlong.id = 1;
//	qianlong.name = "乾隆";
	qianlong.age = 20;
	qianlong.sex = 1;
	qianlong.addr = "大清国北京紫禁城乾清宫";


	//C赋值就是copy
	huangtaiji = yongzheng;
	huangtaiji.name = "我是皇太极";

	printf("皇太极（huangtaiji） 物理地址: %p，名字：%s\n", &huangtaiji,huangtaiji.name);
	printf("雍正（yongzheng） 物理地址: %p，名字：%s\n", &yongzheng,yongzheng.name);
	printf("乾隆（qianlong） 物理地址: %p，名字：%s\n", &qianlong,qianlong.name);

	printf("慈禧（__CIXI__） 物理地址: %p，名字：%s\n", &__CIXI__,__CIXI__.name);


    //定义结构体指针，访问成员时就用->
	struct MAN *nuerhachi = &yongzheng;
	printf("努尔哈赤（nuerhachi） 物理地址: %p，名字：%s\n", &nuerhachi,nuerhachi->name);

	printf("努尔哈赤v2（nuerhachi） 物理地址: %p，名字：%s\n", &nuerhachi,(*nuerhachi).name);
}
///////////////////////////////////////结构体数组//////////////////////////////////////////////
struct{
	int part_number;
	char *description;
} parttab[] = {
		{1,"hsj is smart"},
		{2,"hsj is cute"},
		{3,"hsj is lovely"}
};
struct{
	int part_number;
	char *description;
} parttab2[] = {
		{.part_number = 4,.description = "lby is smart"},
		{.part_number = 5,.description = "lby is cute"},
		{.part_number = 6,.description = "lby is lovely"}
};
//结构体数组
void test_struct_arr(){
	printf("结构体数组:%s\n",parttab[1].description);
	printf("结构体数组2:%s\n",parttab2[1].description);
}
