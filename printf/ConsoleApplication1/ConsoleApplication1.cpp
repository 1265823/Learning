
/*2021年06月01日17点34分
目的：测试printf中的%X及其相关的用法
功能：
*/

#include <stdio.h>

int main(void)
{
	int x = 46;

	printf("%x\n", x);//输出结果是：2e    ----x是以十六进制输出
	printf("%X\n", x);//输出结果是：2E
	printf("%#X\n", x);//输出结果是：0x2E
	printf("%#x\n", x);//输出结果是：0x2e
	printf("%d\n", x);  //输出结果是：46  ----d是以十进制输出
	

	printf("\n\n\n\n");// ---------- \n表示换行

	int a = 12;
	int b = 15;

	printf("%d%d\n", a, b);//输出结果为1215       
	printf("%d %d\n", a, b);//输出结果为12 15
	printf("%d\t%d\n", a, b);//输出结果为12      15
}

	/*在vs2019中的输出结果是：
	-------------------------
	2e
    2E
	0X2E
	0x2e
	46




	1215
	12 15
	12      15
	-------------------------
		   总结：
		   四种用法
           1.printf("字符串")
		   2.printf("输出控制符", 输出参数)
		   3.printf("输出控制符1 输出控制符2。。。"， 输出控制符参数1， 输出控制符参数2。。。)
		        输出控制符和输出参数个个数必须一一对应
		   4.printf("输出控制符 非输出控制符", 输出参数)
	       
	*/    
