/*
题目：找出总分最高的学生
问题描述
给定N 个学生的基本信息，包括学号（由5 个数字组成的字符串）、姓名（长度小于10
的不包含空白字符的非空字符串）和 3 门课程的成绩（[0,100]区间内的整数），要求输出总
分最高学生的姓名、学号和总分。
输入格式
在第一行中给出正整数N（≤10）。随后N 行，每行给出一位学生的信息，格式为“学
号 姓名 成绩1 成绩2 成绩 3”，中间以空格分隔。
输出格式
在一行中输出总分最高学生的姓名、学号和总分，间隔一个空格。题目保证这样的学生
是唯一的。
样例输入
5
00001 huanglan 78 83 75
00002 wanghai 76 80 77
00003 shenqiang 87 83 76
10001 zhangfeng 92 88 78
21987 zhangmeng 80 82 75
样例输出
zhangfeng 10001 258
*/
#include <stdio.h>
typedef struct 
{
    int id;
    char name[10];
    int score[3];
    int total;
}stu;
int main()
{
    int n;
    scanf("%d",&n);
    stu students[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d %d",&students[i].id,students[i].name,&students[i].score[0],&students[i].score[1],&students[i].score[2]);
    }
    
    for(int i = 0; i < n; i++)
    {
        students[i].total = students[i].score[0] + students[i].score[1] + students[i].score[2];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(students[j].total < students[j + 1].total)
            {
                stu temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    stu max = students[0];
    printf("%s %d %d\n",max.name,max.id,max.total);
    
    return 0;
}