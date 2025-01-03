/*
试题名称	判断字符串是否是回文
时间限制:	1 秒
内存限制:	256KB

问题描述
给定一个字符串，判断该字符串是否是回文，并在屏幕上输出判断结果。如“abcba”即是回文。

输入说明
从键盘输入一个字符串，该字符串中字符可以是字母、数字和空格，字母区分大小写。字符串总长不超过50个字符。

输出说明
若该字符串是回文，则输出yes，否则输出no。

输入样例
输入样例1 
abcba
输入样例2 
Abccba

输出样例
输出样例1 
yes
输出样例2 
no
*/
#include <stdio.h>
int main()
{
    char str[50];
    for(int i = 0; i < 50; i++)
    {
        str[i] = '\0';
    }
    scanf("%s", str);

    int length = 0;
    for(int i = 0; i < 50; i++)
    {
        if(str[i] == 0)
        {
            break;
        }
        length++;
    }

    if(length % 2 == 0)
    {
        for(int i = 0; i < length / 2; i++)
        {
            if(str[i] != str[length - 1 - i])
            {
                printf("no\n");
                return 0;
            }
        }
    }
    else
    {
        for(int i = 0; i < length / 2; i++)
        {
            if(str[i] != str[length - 1 - i])
            {
                printf("no\n");
                return 0;
            }
        }
    }
    printf("yes\n");
    return 0;
}