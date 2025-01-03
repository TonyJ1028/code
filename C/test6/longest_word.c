/*
试题名称	最长单词的长度
时间限制:	1 秒
内存限制:	256KB

问题描述
给定一个英文句子，统计这个句子中最长单词的长度，并在屏幕上输出。

输入说明
从键盘输入一个英文句子，句子中只含有英文字符和空格，句子以’.’结束。句子总长不超过100个字符。

输出说明
输出一个整数，表示这个句子中最长单词的长度。允许句子中有相同长度的单词。

输入样例
输入样例1 
I am a student.
输入样例2 
The cat gets a job.

输出样例
输出样例1 
7
输出样例2 
4
*/
#include<stdio.h>
int main()
{
    char pharase[1000];
    scanf("%s",pharase);

    int length = 0;
    int max_length = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(pharase[i] == 0)
        {
            break;  
        }
        if(pharase[i] == ' ' && length >= max_length)
        {
            max_length = length;
            length = 0;
        }
        else if(pharase[i] == ' ')
        {
            length = 0;
        }
        length++;
    }

    printf("%d\n",max_length);
    return 0;
}