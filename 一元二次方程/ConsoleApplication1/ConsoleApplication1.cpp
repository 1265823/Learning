// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <math.h>
int main()
{
    int a = 1;
    int b = 5;
    int c = 6;
    double delta;//判定是否存在解
    double x1;//存放第一个解
    double x2;//存放第二个解

    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("该一元二次方程有两个解，x1 = %f, x2 = %f\n", x1,x2);
            
    }
    else if (delta == 0)
    {
        x1 = (-b / (2 * a));
        x2 = x1; //右边赋给左边
        printf("该一元二次方程有一个唯一解，x1 = x2 = %f\n",x1)

            ;
    }
    else
    {
        printf("无解\n")
            ;
    }

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
