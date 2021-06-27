#include <stdio.h>
/*
int main(void)
{
	int* p; //等价与int *p；也等价于int * p
	int i = 5;
	char ch = 'A';

	p = &i; //*p以p的内容为地址的变量
	*p = 99;
	printf("i = %d, *p = %d\n", i, *p);

	//p = &ch;  error
	//p = ch;  error
	//p = 5;  error
}
*/










void swap_1(int* p, int* q) //形参名字是p和q，接收实参数据的是p和q，而不是*p和*q
{
	int t;
	t = *p;
	*p= *q;
	*q= t;
}

int main(void)
{
	int a = 3;
	int b = 5;

	swap_1(&a, &b);
	printf("a = %d,b = %d\n", a, b);
}