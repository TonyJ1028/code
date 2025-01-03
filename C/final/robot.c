/*
问题描述
机器人按照给定的指令在网格中移动，指令分为以下四种：
（1）N 向北（上）移动
（2）S 向南（下）移动
（3）E 向东（右）移动
（4）W 向西（左）移动
如下图所示，在网格 1（Grid1）中，机器人初始位于网格第 1 行第 5 列，按照网
格中的指令，机器人在走出网格前需要 10 步。在网格 2（Grid2）中，机器人初
始位于网格第 1 行第 1 列，按照网格中的指令，机器人将进入一个循环，永远走
不出网格，且在进入循环前走了 11 步。
              *                *
  N  E  E  S<-W  E             S  E  S<-W  E
           |                   |     |  ^
           v                   v     v  |
<-W<-W  W  E->S  S             E->E->S  N<-W
     ^        |                      |     ^
     |        v                      v     |
  S  N<-W<-W<-W  W             N  W  E->E->N
       Grid1    

                               E  W  S  E  N
                                  Grid2
假定机器人初始时刻总是在网格第一行的某一列上，请你写一个程序确定机器人
能否走出网格，并输出走出网格或进入循环需要的步数。

输入说明
输入数据第一行为由空格分隔的 3 个非负整数，分别表示网格行数 N、列数 M
和初始时刻机器人所在的列号 C（从网格最左边开始，以 1 为基准计数）。每个
网格的行数和列数均不超过 20。接下来是 N 行指令，指令只包含 N，S，E 和 W
四种，所有指令之间没有空格。

输出说明
如果机器人可以走出网格，则输出"out "和走出网格需要的步数，之间用一个空
格分隔；如果机器人由于进入循环而不能走出网格， 则输出"loop "以及进入循环
前走的步数，之间用一个空格分隔。

输入样例
3 6 5
NEESWE
WWWESS
SNWWWW

输出样例
out 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,m,c;
    scanf("%d %d %d",&n,&m,&c);
    char a[n][m];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            a[i][j]=getchar();
        }
    }
    int current[2]={0,c - 1};
    int step = 0;
    while(1)
    {
        if(current[0] < 0 || current[0] >= n || current[1] < 0 || current[1] >= m)
        {
            printf("out %d",step);
            break;
        }
        if(a[current[0]][current[1]] == 'N')
        {
            current[0]--;
        }
        else if(a[current[0]][current[1]] == 'S')
        {
            current[0]++;
        }
        else if(a[current[0]][current[1]] == 'E')
        {
            current[1]++;
        }
        else if(a[current[0]][current[1]] == 'W')
        {
            current[1]--;
        }
        a[current[0]][current[1]] = 'X';
        step++;
        if(a[current[0]][current[1]] == 'X')
        {
            printf("loop %d",step);
            break;
        }
    }
    return 0;
}