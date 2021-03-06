#include <stdio.h>

/*
指针就是地址，地址就是指针
地址就是内存单元的编号

指针变量是存放地址的变量

指针和指针变量是两个不同的概念
但是要注意:通常我们叙述时会把指针变量简称为指针，实际含义并不一样
*/




/*    指针热身1
int main(void)
{
	int* p;//p是变量的名字，int*表示p变量存放的是int类型变量的地址
	int i = 3;

	p = &i; //ok 
	//p = i; //error,因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
	//p = 55; //error,原因同上，

}
*/











int main(void)  //指针热身2
{
	int* p; //p是变量的名字，int*表示p变量存放的是int类型变量的地址
	        //int*p;不表示定义了一个名字叫*p的变量
	       //int*p; p是变量名，p变量的数据类型是int*类型
	       //所谓int*类型 实际就是存放int变量地址的类型
	int i = 3;
	int j;
	p = &i;
	 /*
	  1. p保存了i的地址，因此p指向i
	  2. p不是i，i也不是p，更准确的说：修改p的值不影响i的值,修改i的值也不会影响p的值
	  3. 如果一个指针变量指向了某个普通变量，则
	           *指针变量 就完全等同于 普通变量
		 例子
			   如果p是个指针变量，并且p存放了普通变量i的地址
			   则p指向了普通变量i
			   *p 就完全等同于 i
	    或者说：
               在所有出现*p的地方都可以替换成i
			   在所有出现i的地方都可以替换成*p
		
		       *p 就是以p的内容为地址的变量
	*/
	j = *p;  //等价与j = i
	printf("i = %d, j = %d\n", i, j);
}