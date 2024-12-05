/*
标题
斐波纳契数列
类别
函数与递归
时间限制
2S
内存限制
256Kb
问题描述
已知一个斐波纳契数列中的数字依次为 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 …
列中第 n 个数字（n 从 1 开始计数）是不是素数。
。请判断该数
输入说明
输入一个整数 n（1<n<=40） 。
输出说明
判断斐波纳契数列中的第 n 个数字是不是素数，如果是输出 yes，否则输出该数字。
输入样例
样例 1 输入
6
样例 2 输入
4
输出样例
样例 1 输出
8
样例 2 输出
yes
*/
#include<stdio.h>
int fibo(int f);
int main()
{
    int n;
    scanf("%d",&n);

    n -= 1;

    n = fibo(n);

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d\n",n);
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}

int fibo(int f)
{
    if(f == 0 || f == 1)
    {
        return 1;
    }
    else
    {
        return fibo(f - 2) + fibo(f - 1);
    }
}