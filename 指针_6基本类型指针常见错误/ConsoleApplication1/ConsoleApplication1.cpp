#include <stdio.h>

int main(void)
{
	int i = 5;
	int* p;
	int* q;

	p = &i;
	//*q = p;//int*类型的值无法分配到int类型
	//*q = *p;//q没有赋值,为初始化变量
	//p = q;//q时垃圾值，q赋给p，p也变成垃圾值
	q = p;
	printf("%d\n", *q);
	//q的空间是属于本程序的，所以本程序可以读写q的内容，
	//但是如果q内部是垃圾值，则本程序不能读写*q的内容
	//因为此时*q所代表的内存单元的控制程序权限并没有分配给本程序
	return 0;
}