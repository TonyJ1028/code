/*
目：字符串长度判断(1) 
时间限制：1S
内存限制：10000Kb

问题描述：
写一个函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。（注意：必须用指针数组处理）

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
int length(char str[1000]);
int main()
{
    char str[1000];
    for(int i = 0; i < 1000; i++)
    {
        str[i] = 0;
    }

    scanf("%s",str);

    printf("%d\n",length(str));
    return 0;
}

int length(char str[1000])
{
    int len = 0;
    for(int i = 0; i < 1000; i ++)
    {
        if(str[i] != 0)
        {
            len++;
        }
        else{break;}
    }
    return len;
}
