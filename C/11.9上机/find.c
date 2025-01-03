/*
标题
查找
类别
数组
时间限制
1S
内存限制
256Kb
问题描述
给定一个包含 n 个整数的数列 A0,A1,A2,
置（从 0 开始计算） 。
…An-1 和一个整数 k，依次输出 k 在序列中出现的位
输入说明
输入由两行构成，第一行为两个整数 n 和 k，分别表示数列中整数个数和待查找整数 k，n 和 k
之间用空格分隔，0<n<100，0<k<10000。
第二行为 n 个整数，表示数列中的各个整数，整数之间用空格分隔，每个整数均不超过 10000。
输出说明
依次输出整数 k 在数列中出现的位置（从 0 开始计算） ，如果 k 未在数列中出现，则输出-1。
输入样例
样例 1 输入
5 20
10 20 30 20 5
样例 2 输入
5 20
10 30 25 34 44
输出样例
样例 1 输出
1 3
样例 2 输出
-1
*/
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int has = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            has = 1;
            printf("%d ",i);
        }
    }
    if(has)
    {
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}