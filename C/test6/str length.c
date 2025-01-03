/*
题目：字符串长度判断 
时间限制：1S
内存限制：10000Kb

问题描述：
写一个函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。

输入说明：
输入一个字符串
输出说明：
输出该字符串中元素的个数。
输入样例：
boy
输出样例：
3
*/
#include<stdio.h>
void length(char str[10000]);
int main()
{
    char str[10000];
    scanf("%s",str);
    length(str);
}

void length(char str[10000])
{
    for(int i = 1; i < 10000; i++)
    {
        if(str[i] == 0)
        {
            printf("%d\n",i);
            return;
        }
    }
}
