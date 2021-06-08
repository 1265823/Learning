#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
/*
int main()
{
	int val;///存放待判断的数字
	int m;
	int sum = 0;

	printf("请输入您要判断的数字：");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == val)
		printf("Yes!\n");
	else
		printf("No\n");

}
*/


int main()
{
	int n;
	int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;

	printf("请输入您需要求的想的序列：");
	scanf("%d", &n);

	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
	    }
	}
	printf("%d\n", f3);
}