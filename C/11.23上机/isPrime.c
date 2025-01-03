/*
题目:素数判断
时间限制：1S
内存限制：10000Kb
问题描述：

写一个判断素数的函数，在主函数输入一个整数，输入是否为素数的信息。
输入说明：
输入一个（n >= 2）的数字。
输出说明：
判断该数字是否为素数。
输入样例
3
输出样例：
YES

*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}