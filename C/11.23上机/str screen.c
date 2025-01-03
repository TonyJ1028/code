/*
2.编写函数fun，其功能是将字符串s下标为奇数的字符删除，字符串中剩余字符形成的新字符串放在数组t中。
主函数中输入字符串s，调用函数，输出字符数组t。

输入说明：共一行，输入字符串s

输出说明：共一行，输出字符串t

输入示例：abcd1234

输出示例：ac13
*/
#include<stdio.h>
void screen(char str[100],char *str1,int length);
int main()
{
    char str[100];
    scanf("%s",str);
    int length = 0;
    while(str[length] != 0)
    {
        length++;
    }
    char str1[100];

    screen(str,str1,length);
    printf("%s\n",str1);
    return 0;
}

void screen(char str[100],char *str1,int length)
{
    for(int i = 0; i < length; i++)
    {
        if(i % 2 == 0)
        {
            str1[i / 2] = str[i];
        }
    }
}
