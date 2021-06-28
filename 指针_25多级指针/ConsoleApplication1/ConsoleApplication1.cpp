#include<stdio.h>
/*
int main(void)
{
	int i = 10;
	int* p = &i;
	int** q = &p;
	int*** r = &q;
	
	printf("%d\n", ***r);

}
*/

void f(int** q)
{
	**q = 5;
	printf("%d\n", **q);
}

void g()
{
	int i = 10;
	int* p = &i;
	printf("%d\n", *p);
	f(&p); //p是int *类型,&p是int**类型
	printf("%d\n", *p);
}

int main(void)
{
	g();
}



