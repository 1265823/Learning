#include <stdio.h>
/*
   如何取出结构体变量中的每一个成员
   1. 结构体变量名.成员名
   2. 指针变量名->成员名（第二种方式更常用）
       指针变量名->成员名 再计算机内部会被转化成(*指针变量名).成员名
       的方式执行
       所以说两种方式是等价的
*/

struct Student
{
    int age;
    float score;
    char sex;
};

int main(void)
{
    struct Student st = { 80, 66.6, 'F' };
    struct Student* pst = &st;  //&st不能改成st
     
    pst->age = 88;//第二种方式
    st.score= 66.6f; //第一种方式 66.6在c语言中默认是double类型，如果希望一个实数是folat类型，
                     //必须在末尾加f或F，因此66.6是double, 66.6f或66.6F是float类型
    printf("%d %f\n", st.age, pst->score);
}

/*
    1. pst->age在计算机内部会被转化成(*pst).age ,没有为什么，
       这就是->的含义 ，也是一种硬性规定
    2. 所以pst->age 等价于(*pst).age 也等价于 st.age
    3. 我们之所以知道pst->age 等价于 st.age 是因为 pst->age是被转化
       成了(*pst).age来执行
    4. pst->age 的含义:
       pst所指向的那个结构体变量中的age这个成员

*/