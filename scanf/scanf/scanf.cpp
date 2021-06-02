/* scanf()
        两种用法：
            用法一：scanf("输入控制符"，输入参数)；
            功能：将从键盘输入的字符转化为输入控制符所规定格式的数据，然后存入已输入
                  参数的值为地址的变量中
            用法二：scanf("非输入控制符"，输入参数)；
            功能：同上。
                  ####非输入控制符必须原样输入########
            
*/
#define _CRT_SECURE_NO_WARNINGS   //#####如果报错则输入这行

# include<stdio.h>
/*
int main() 
{
    int i;

   //scanf("%d", &i);  //&i 表示i的地址 &是一个取地址符  #########此为用法一
    
    scanf("m%d",&i); //m123正确的输入 123是非法的输入    #########此为用法二
    
    printf("i = %d\n", i);

}
*/


//############一次给多个变量键盘赋值
/*
int main()
{
    int i, j, k;
    
    scanf("%d %d %d", &i, &j, &k);
    printf("i = %d, j = %d, k = %d\n", i, j, k);

}
*/

/*如何使用scanf编写出高质量代码
1.使用scanf之前最好先使用printf提示用户以什么样的方式输入
2.scanf中尽量不要使用非输入控制符，尤其是不要用\n  
  如： scanf("%d\n", &i); //非常不好的格式，不要加\n，因为属于非输入控制符
3.应该编写代码对用户的非法输入做适当处理
如：*/

int main()
{
    int b;
    char ch;

    scanf("%d", &b);
    printf("b = %d\n", b);
    

    while ((ch=getchar()) != '\n')    ///把前面的输入清除
        continue;
    int j;
    scanf("%d", &j);
    printf("j = %d\n", j);

}










