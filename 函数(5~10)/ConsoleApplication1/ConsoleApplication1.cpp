//时间：2021年6月11日21点52分
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*#########return和break的区别###############
void f(void)
{
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("我是大帅逼！\n");
		return ;     //终止函数，不向主调返回任何值
		            //break终止for循环
	}
	printf("不，你是傻逼\n");
}
int main(void)
{
	f();
	return 0;   //终止函数，向被调函数返回10
}
*/

/*//#############函数的分类##################
有参函数 和 无参函数
有返回值函数 和 无返回值函数
库函数 和 用户自定义函数
值传递函数 和 地址传递函数
普通函数 和 主函数 
############以下为重点######
一个程序必须有且只能有一个主函数
主函数可以调用普通函数，普通函数，不能调用主函数
普通程序可以相互调用
主函数是程序的入口，也是程序的出口
*/

/*
//##############函数举例，判断是否是素数################
bool inprims(int val)
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int m;

	scanf("%d", &m);

	if (inprims(m))
		printf("是，素数\n");
	else
		printf("不是素数\n");

}
*/
//##################函数的声明######################
/*
void f(void);  //声明放前面,函数声明，分号不能漏

int main(void)
{
	f();
	return 0;
}

void f(void)
{
	printf("哈哈\n");
}
*/

void f (void);  //声明函数f,前置声明

void g(void)
{
	f();   //因为函数f的定义放在了调用f语句的后面，所以语法出错.
}

void f(void)
{
	printf("哈哈\n");
}

int main(void)
{
	g();

	return 0;
}