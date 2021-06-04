/*时间：2021年6月4日17点03分
  目的：学习 if_else if_else的使用
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

/*
if最简单的用法
          格式：
               if (表达式)      表达式为真，执行语句
			          语句      表达式为假，语句不执行
*/
/*
 if的范围：   
          if(表达式)
               语句A；
			   语句B；    语句B不会执行，默认只控制第一个语句的执行
*/
/*
   如何控制多个语句：
           if(表达式)
		   {
		       语句A；      控制多个语句，则需要使用花括号.
			   语句B；
		   }
*/
/*
  if else的用法:
            if(表达式)      表达式正确则执行语句A，否则执行语句B
                 语句A;     
            else
                 语句B;
*/
/*
  if_ else if_ else的用法:
                         if(表达式1)            1成立则执行语句A
                              语句A;           否则如果2成立则执行语句B
                         else if (表达式2)     否则如果3成立执行语句C，
                              语句B;           1, 2, 3,都不成立否则执行D
                         else if (表达式3)
                              语句C;
                         else
                              语句D;
*/
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("A大于B\n");
        //printf("哈哈哈哈哈");此处加上为何会出错？？  因为没有匹配if
    else if (a == b)
        printf("A等于B\n");
    else
        printf("A小于B\n");

}



