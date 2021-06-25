#include <stdio.h>
/*  不能完成互换功能
void huhuan1(int a, int b)
{
	int t;

	t = a;
	a = b;
	b = t;

}
int main(void)
{
	int a = 3;
	int b = 5;

	huhuan1(a, b);
	printf("a = %d,b = %d\n", a, b);

}
*/







/*  不能完成互换功能
void huhuan2(int* p, int* q)
{
	int* t;//如果要互换p和q的值，则t必须是int*类型，不能是int，否则会出错

	t = p;
	p = q;
	q = t;

}

int main(void)
{
	int a = 3;
	int b = 5;

	huhuan2(&a, &b);
	//huhuan2(a, b)错误
	//huhuan2(*p, *q)错误
	printf("a = %d, b = %d\n", a, b);
}
*/








void huhuan3(int* p, int* q)
{
	int t;  //如果要互换*p和*q的值，则t必须定义成int类型，不能定义成int*

	t = *p;  //p是int*类型，*p是int类型
	*p = *q;
	*q = t;

}

int main(void)
{
	int a = 3;
	int b = 5;

	huhuan3(&a, &b);

	printf("a = %d, b = %d\n", a, b);
}