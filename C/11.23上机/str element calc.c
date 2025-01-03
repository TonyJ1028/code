/*
题目：字符串元素统计
时间限制：1S
内存限制：10000Kb
问题描述：

编写一个函数，由实参传来一个字符串，统计字符串中字母，数字的个数，在主函数中输入字符及输出上述结果。
输入说明：
随机输入一个字符串。
输出说明：
依次输出该字符串中字母，数字的个数。
输入样例
abc123
输出样例：
3,3
*/
#include<stdio.h>
void ele_calc(char str[100], int *c, int *n, int length);
int main()
{
    char str[100];
    scanf("%s",str);
    int length = 0;
    while(str[length] != 0)
    {
        length++;
    }

    int character = 0,num = 0;

    ele_calc(str,&character,&num,length);

    printf("%d,%d\n",character, num);
    return 0;
}

void ele_calc(char str[100],int *c,int *n,int length)
{
    for(int i = 0; i < length; i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            (*c)++;
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {
            (*n)++;
        }
    }
}
