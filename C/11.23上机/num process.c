/*
标题
数字处理
类别
函数与递归
时间限制
2S
内存限制
1000Kb
问题描述
编写一个程序，从键盘输入一个非零整数 n（0 < n <= 1000000000） ，对整数 n 进行如下处理：
将整数的各位数字取出来相加，如果结果是一位数则输出该数，否则重复上述过程，直到得到
的结果为一位数，并输出该结果。
例如：n=456，变换过程如下
4+5+6=15
1+5=6
输出结果为 6
输入说明
一个非零整数 n。
输出说明
输出整数 n 的处理结果。
输入样例
456
输出样例
6
*/
#include<stdio.h>
int f(int n);
int main()
{
    int n;
    scanf("%d",&n);

    int sum = f(n);
    while(sum >= 10)
    {
        sum = f(sum);
    }

    printf("%d\n",sum);

    return 0;
}

int f(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
