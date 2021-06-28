#include <stdio.h>
#include <malloc.h>

void f(int* q)
{
	//*p = 200;error
	//q = 200;error
	//**q = 200;error
	*q = 200;
	//free(q);//把q所指向的内存释放，q=p,会导致20行代码出错
}

int main(void)
{
	int* p = (int*)malloc(sizeof(int));
	*p = 10;

	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);
	free(p);
}