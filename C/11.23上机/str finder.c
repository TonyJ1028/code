/*
编写一个函数fun，求一个字符串中的英文字母的个数。
主函数中输入字符串，调用函数，输出英文字母个数

输入说明：共一行，输入字符串

输出说明：输出一个整数，为英文字母个数

输入示例：aBc456

输出示例：3
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

    printf("%d\n",character);
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
