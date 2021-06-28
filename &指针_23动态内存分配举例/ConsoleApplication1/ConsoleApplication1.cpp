#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <malloc.h>

int main(void)
{
	//int a[5];//如果int占4个字节，则本数组共包含20个字节，每4个字节被当作了int变量使用
	int *pArr;
	int len;
	int i;
	
	//动态的构造一维数组
	printf("请输入您要存放的元素个数：");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len);//本行动态构造了一个一维数组，数组的长度是len，
	//数组名是pArr，数组的每个元素类型是int类型， 类似与int pArr[len];
	//(4 * len) ,如果len是5，则在内存中分配20个字节

	//对一维数组进行操作
	for (i = 0;i < len; ++i)
		scanf("%d", &pArr[i]);

	//对一维数组进行输出
	printf("一维数组的内容是：\n");
	for (i = 0; i < len; ++i)
		printf("%d\n", pArr[i]);

	free(pArr); //释放掉动态分配的数组pArr
}