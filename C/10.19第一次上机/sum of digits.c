/*
标题：计算整数各位数字之和
问题描述:
假设 n 是一个由最多 9 位数字（d9, …, d1）组成的正整数。编写一个程序计
算 n 的各位数字之和。
输入说明:
输入数据为一个正整数 n。
输出说明:
对整数 n 输出它的各位数字之和后换行。
输入样例:
3704
输出样例:
14
*/
#include<stdio.h>
int main()
{
    int num,sum = 0;
    scanf("%d",&num);
    
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("%d\n",sum);
    return 0;
}