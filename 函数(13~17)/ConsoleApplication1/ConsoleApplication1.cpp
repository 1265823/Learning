#include <stdio.h>
/*
void f(int i);
void g(void)
{
	f(5);
}
void f(int i)
{
//	int i = 99;  形参i的重定义

	printf("i = %d\n", i);
	return ;
	
}

int main(void)
{
	int i = 10;   //与9行代码重定义
	g();
	return 0;
}
*/

/*
// 为何是错的，因为k的声明在32行，而函数g在27行到30行中，k并没有声明
void g()
{
	printf("k = %d\n", k);
}

int k = 1000; 

void f(void)
{
	g();
	printf("k = %d\n", k);
}

int main(void)
{
	f();
	return 0;
}
*/