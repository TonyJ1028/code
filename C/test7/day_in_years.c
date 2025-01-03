/*
题目：年月日统计 
时间限制：1S
内存限制：10000Kb

问题描述：
定义一个结构体变量（包括年，月，日）。计算该日在本年中是第几天，（注意闰年问题）

输入说明：
输入三个数，分别表示年月日，数字之间用逗号隔开。
输出说明：
输出一个整数，表示该日期是本年中的第几天。
输入样例：
2019,1,30
输出样例：
30
*/
#include <stdio.h>

int main()
{
    typedef struct
    {
        int year;
        int month;
        int day;
    } Date;
    Date date;
    scanf("%d,%d,%d", &date.year, &date.month, &date.day);
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int leap_month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    if(date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0)
    {
        for (int i = 0; i < date.month - 1; i++)
        {
            sum += leap_month[i];
        }
        sum += date.day;
    }
    else
    {
        for (int i = 0; i < date.month - 1; i++)
        {
            sum += month[i];
        }
        sum += date.day;
    }
    printf("%d", sum);
    return 0;
    
}