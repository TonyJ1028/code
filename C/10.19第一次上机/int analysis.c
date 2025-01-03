/*
标题
整数分析
类别
流程控制
时间限制
1S
内存限制
256Kb
问题描述
给出一个整数 n（0<=n<=100000000） 。求出该整数的位数，以及组成该整数的所有数字中的最
大数字和最小数字。
输入说明
输入一个整数 n（0<=n<=100000000）
输出说明
在一行上依次输出整数 n 的位数，以及组成该整数的所有数字中的最大数字和最小数字，各个
数字之间用空格分隔。
输入样例
217
输出样例
3 7 1
*/
#include<stdio.h>
int main()
{
    int num = 0;
    scanf("%d",&num);

    int digit = 0,max_digit = 0;
    int min_digit = 9;
    
    if(num == 0)
    {
        printf("1 0 0\n");
        return 0;
    }

    while(num != 0)
    {
        if (num % 10 > max_digit)
        {
            max_digit = num % 10;  
        }
        if(num % 10 < min_digit)
        {
            min_digit = num % 10;
        }
        num = num / 10;
        digit++;
    }

    printf("%d %d %d\n",digit,max_digit,min_digit);
    return 0;
}