/*
题目：字符串复制
时间限制：1S
内存限制：10000Kb
问题描述：

有一个字符串，包含n个字符。写一个函数，将此字符中从第m个字符开始的全部字符复制成为另外一个字符。（注意：必须用指针数组处理）

输入样例：
abcdefg
5
输出样例：
efg
输入样例：
qazxsw
8
输出样例：
error
*/
#include<stdio.h>
void copy(char str[1000], char strcopy[1000],int m);
int main()
{
    char str[1000];
    char strcpy[1000];
    for(int i = 0; i < 1000; i++)
    {
        str[i] = 0;
    }

    scanf("%s",str);
    int length = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(str[i] == 0)
        {
            break;
        }
        length++;
    }
    int m = 0;
    scanf("%d",&m);

    if(m > length)
    {
        printf("error\n");
        return 0;
    }

    copy(str,strcpy,m);

    printf("%s\n",strcpy);
    return 0;
}

void copy(char str[1000], char strcopy[1000],int m)
{
    
    for(int i = m - 1; i < 1000; i++)
    {
        strcopy[i - (m - 1)] = str[i];
    }
}
