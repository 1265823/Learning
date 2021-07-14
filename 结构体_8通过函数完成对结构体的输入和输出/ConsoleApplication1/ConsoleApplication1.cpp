#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Student

{
	int age;
	char sex;
	char name[100];
 };
void InputStudent(struct Student *);
void OutputStudent(struct Student *);
int main(void)
{
	struct Student st;
	printf("%d\n", sizeof(st));
	
	InputStudent(&st); //对结构体变量输入   必须发送st的地址
	OutputStudent(&st);//对结构体变量输出  可以发送st的地址，也可以发送内容 为减少内存和提高速度，推荐发送地址

	return 0;
}

void OutputStudent(struct Student *pst)
{
	printf("%d %c %s\n", (*pst).age, pst->sex, pst->name);
}

void InputStudent(struct Student *pstu)
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}