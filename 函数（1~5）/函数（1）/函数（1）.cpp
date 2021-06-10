#include <stdio.h>
//时间：2021年6月10日20点01分
//目的：学习赫斌c语言函数（1~5）
/*
//max是函数的名字，i和j是形式参数，简称形参 void表示函数没有返回值
void max(int i, int j)
{
	if (i > j)
		printf("%d\n", i);
	else
		printf("%d\n", j);
}
int main(void)
{
	int a, b, c, d, e, f;

	a = 1; b = 2, c = 3, d = 9, e = -5, f = 100;
	max(a, b);
	max(c, d);
	max(e, f);
	*/
	/*
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);

	if (c > d)
		printf("%d\n", c);
	else
		printf("%d\n", d);

	if (e > f)
		printf("%d\n", e);
	else
		printf("%d\n", f);
	*/
//}          ##########以上为：为什么需要函数###################


/*
int f(void)   //括号中的void表示该函数不能接受数据 int表示该函数返回值是int类型
{
	return 10;  //向主调函数返回10
}

void g(void) //函数名前面的void表示该函数没有返回值 
{
//	return 10;//error  与43行首的void相矛盾 
}


int main(void)
{
	int j = 88;

	j = f();
	printf("%d\n", j);

//	j = g(); //error,因为g函数没有返回值
 
}
*/ 
//################以上为：什么是函数#######################


int f()
{
	return 10.5;  //因为函数的返回值类型是int 所以最终f返回的是10而不是10.5
}

int main(void)
{
	int i = 99;
	double x = 6.6;

	x = f();
	printf("%lf\n", x);
}
//#############以上为如何定义函数################