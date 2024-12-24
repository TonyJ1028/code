/*
标题
数列求和
类别
函数与递归
时间限制
1S
内存限制
1000Kb
问题描述
有一分数序列：
2/1,3/2,5/3,8/5,13/8,21/13,......An/Bn
A1=2，A2=3，An=An-1+An-2；
B1=1，B2=2，Bn=Bn-1+Bn-2。
求出这个数列的前 n(2<=n<=30)项之和。
输入说明
一个整数 n
输出说明
输出一个实数表示数列前 n 项之和，结果保留 2 位小数（四舍五入）
输入样例
2
输出样例
3.50
*/
#include<stdio.h>
int a(int n);
int b(int n);
int main()
{
    int n;
    scanf("%d",&n);

    double sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += ((double)a(i) / b(i));
    }

    printf("%.2f\n",sum);
    return 0;
}

int a(int n)
{
    if(n == 1)
    {
        return 2;
    }
    else if(n == 2)
    {
        return 3;
    }
    else
    {
        return a(n - 1) + a(n - 2);
    }
    return 0;
}

int b(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 2;
    }
    else
    {
        return b(n - 1) + b(n - 2);
    }
    return 0;
}
