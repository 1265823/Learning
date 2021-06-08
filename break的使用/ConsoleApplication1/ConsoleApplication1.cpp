#include <stdio.h>
int main()
{
	/* //#################在循环中break的使用##############
	int i;
	int j;

	for (i = 0; i < 3; ++i)
	{
		if (3 > 2)
			break;          //break虽然是if内部语句， 但break终止的是外部for的循环
		printf("嘿嘿!\n");  //永远不会输出
	}                       //break不能直接用于if，除非if属于循环内部的一个子句

	for (i = 0; i < 3; ++i)
	{
		for (j = 1; j < 4; ++j)
			break;   //在多层循环中，break只能终止距离他最近的循环
		printf("哇哇哇哇\n");
	}
	*/



	//##########在switch中break的使用############
	int x = 1, y = 0, a = 0, b = 0;
	switch (x)   //第一个switch
	{
	case 1:
		switch (y)   //第二个switch
		{
		case 0:
			a++;
			break;  //终止的是第二个switch
		case 1:
			b++;
			break;
		}
	    b = 100;
		break;      //终止的是第一个switch
	case 2:
		a++;
		b++;
		break;
	}
	printf("%d %d\n", a, b);
}