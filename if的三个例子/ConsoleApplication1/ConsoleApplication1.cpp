
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*/*
int main()
{
	float score; //score分数

	printf("请输入成绩:");
	scanf("%f", &score);
	
	if (score >= 100)
		printf("这是做梦!\n");
	else if (score >= 90 && score < 100)  //不能写成90 <= score <= 100
		printf("优秀");
	else if (score >= 80 && score < 90)
		printf("良好");
	else if (score >= 60 && score < 80)
		printf("及格");
	else if (score >= 0 && score < 60)
		printf("不及格");
	else
		printf("分数过低，不要自卑");
} 
*/

/*                 #######互换两个数字
int main()
{
	int i = 3;
	int j = 5;
	int t;

	 t = i;
	 i = j;
	 j = t;

	printf("i = %d,j = %d\n", i, j);
}
*/

int main()             //对任意三个数字进行排序（从大到小）
{
	int a, b, c;
	int t;
	printf("请输入三个值\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
}