#include <stdio.h>
 
void f(int** q)
{
	int i = 5;
	//*q等价与p  q和**q都不等价于p
	//*q = i; //error 因为*p = i;等价于 p = i;这样写是错误的
	*q = &i;
}

int main(void)
{
	int* p;

	f(&p);
	printf("%d\n", *p);//语法没问题，逻辑上有问题
					   //15行执行完，不能访问i空间， f函数被释放.
	                 //静态变量不能跨函数使用，释放之后，不能被其他函数使用
	return 0;
}