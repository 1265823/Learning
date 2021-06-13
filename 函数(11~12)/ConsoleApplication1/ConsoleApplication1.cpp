#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//###########形参和实参###############
/*
void f(int i, double x)  //形参
{
	printf("%d %fl\n", i, x);
}
int main()
{
	f(5, 6.6); //实参
	return 0;
	                       //个数相同 位置一一对应
	                      //数据类型相互兼容
}
*/
//判断一个数是否为素数
/*
bool IsPrimt(int val)
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	if (IsPrimt(val))
		printf("Yes\n");
	else
		printf("No\n");

		return 0;
}
*/
/*
	求1到某个数字之间(包括该数字)所有的素数，并将其输出
	用1个函数来判断一个数字是否是素数
		优点:
			代码比  如何设计函数_3.cpp  更容易理解
			代码的可重用性比  如何设计函数_3.cpp 高
		缺点：
			可重用性仍然不是非常高，
			比如有1000个数字，求它们每个数字从1到它本身的素数
			则
					for (i=2; i<=val; ++i)
					{
						if ( IsPrime(i) )
							printf("%d\n", i);
					}
			要写1000次

*/

bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;

}

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	for (i = 2; i <= val; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}

	return 0;
}

/*

	用两个函数来实现求1到某个数字之间所有的素数，并将其输出
	本程序 和 如何合理设计函数_4.cpp 相比较
	代码量更少，可重用性更高
*/


/*
//本函数的功能是: 判断m是否是素数，是返回true，不是返回false
bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;

}

//本函数的功能是把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)
{
	int i;

	for (i = 2; i <= n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;

	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}
*/