#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int val;

	printf("请选择关卡:");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("第一关\n");
		break;
	case 2:
		printf("第二关\n");
		break;
	case 3:
		printf("第三关\n");
		break;
	default:
		printf("暂无新关卡\n");
		break;
	}
}