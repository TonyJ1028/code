/*
题目：相似度
问题描述
编写程序完成两个字符串相似度的计算任务。
相似度：对于两个字符串，相同字符串的最大长度 L（忽略大小写） ，len1、len2 分别
为两个字符串的长度，相似度 LCS=2*L/(len1+len2)。（字符串长度均小于 100，由大小写
字母构成）。
输入格式
第一行输入字符串A。
第二行输入字符串 B。
输出格式
输出计算结果，保留 3 位小数。
样例输入 1：
asdup
asd
样例输入 2：
ManyPencil
manyp
样例输入 3：
threetreethere
reetr
样例输出 1：
0.750
样例输出 2：
0.667
样例输出 3：
0.526
样例说明
字符串均由大小写字母构成，长度小于 100。
评测用例规模与约定
字符串可以完全相同、部分相同，也可以完全不同。
*/
#include<stdio.h>
int length(char str[100]);
void upper_lower_conversion(char str[100]);
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);

    int len1 = length(str1);
    int len2 = length(str2);

    upper_lower_conversion(str1);
    upper_lower_conversion(str2);
    int l = 0;
    int final_l = 0;
    for (int i = 0; i < 100; i++)
    {
        if(str1[i] == str2[i])
        {
            l++;
        }
        if(str1[i] != str2[i] && l > final_l)
        {
            final_l = l;
        }
        if(str1[i] != str2[i])
        {
            l = 0;
        }
        if(str1[i] == 0 || str2[i] == 0)
        {
            break;
        }
    }
    double lcs;
    lcs =(double)(2 * final_l) / (len1 + len2);
    printf("%.3lf\n",lcs);
    return 0;
}

int length(char str[100])
{
    int len = 0;
    for(int i = 1; i < 100; i++)
    {
        if(str[i] == 0)
        {
            len = i;
            break;
        }
    }
    return len;
}

void upper_lower_conversion(char str[100])
{
    for(int i = 0; i < 100; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        if(str[i] == 0)
        {
            return;
        }
    }
}
