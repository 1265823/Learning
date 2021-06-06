/*
时间：2021年6月6日14点55分
目的：熟练掌握for循环
*/
#include <stdio.h>
/*
int main()      //1到5之间的和
{
	int i;
	int sum = 0;
	for (i = 1; i <= 5; ++i)
		sum = sum + i;
	
	printf("sum = %d\n", sum);


}
*/
/*
int main()            //1到10之间的奇数和
{
	int i;
	int sum = 0;
	for (i = 1; i < 10; i += 2)
	{
		sum = sum + i;
	}

	printf("sum = %d\n", sum);
}
*/
/*
int main()           //从1到10，能被三整除的之和
{
	int i;
	int sum = 0;
	for (i = 3; i <= 10; ++i)
	{
		if (i % 3 == 0)	
			sum = sum + i;
			printf("%d\n", sum);
		
	}
}
*/
/*
int main()              //1到100之间奇数之和
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
}
*/
/*
int main()          //1到100之间奇数的个数
{
	int i;
	int n = 0;

	for (i = 1; i <= 100; i += 2)
	{
		n++;
	}
	printf("n = %d\n", n);
}
*/
/*
int main()                 ///1到100之间奇数的平均值
{
	int i;
	int n = 0;
	int sum = 0;
	int p;
	for (i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
		n++;
		p = sum / n;
	}
	printf("%d\n", p);
}
*/
/*
int main()     //1到100之间奇数之和
{
	int i;
	int sum = 0;

	for (i = 1; i < 100; ++i)
	{
		if (i % 2 && i != 0)
			sum = sum + i;
	}
	printf("sum = %d\n", sum);

}
*/


int main()     //
{
	int i;
	int sum = 0;
	int sum2 = 0;
	int n = 0;
	int p;
	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 && i != 0)
		{
			sum = sum + i;
			++n;
			p = sum / n;
		}
		else if (i % 2 == 0)
			sum2 = sum2 + i;
	}
	printf("奇数和 = %d , 偶数和 = %d , 奇数的个数 = %d, 奇数的平均值 = %d\n", sum, sum2, n, p);
}

