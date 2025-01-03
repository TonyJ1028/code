/*
标题：寻找马鞍点
问题描述
若一个矩阵中的某元素在其所在行最小而在其所在列最大，则该元素为矩阵的一个马鞍
点。请写一个程序，找出给定矩阵的马鞍点。
输入说明
输入数据第一行只有两个整数 m 和 n（0<m<100,0<n<100），分别表示矩阵的行数和
列数；
接下来的 m 行、每行 n 个整数表示矩阵元素（矩阵中的元素互不相同），整数之间以空
格间隔。
输出说明
在一行上输出马鞍点的行号、列号（行号和列号从 0 开始计数）及元素的值，数据之间
以空格分隔，之后换行；
若不存在马鞍点，则输出一个字符串“no”后换行。
输入样例
4 3
11 13 121
407 72 88
23 58 1
134 30 62
输出样例
1 1 72
*/
#include<stdio.h>
typedef struct
{
    int num;
    int hor_cord;
    int ver_cord;
}Point;
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int matrix[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    Point lines_min[m];
    for(int i = 0; i < m; i++)
    {
        lines_min[i].num = matrix[i][0];
        lines_min[i].hor_cord = i;
        lines_min[i].ver_cord = 0;
        for(int j = 1; j < n; j++)
        {
            if (matrix[i][j] < matrix[i][j - 1])
            {
                lines_min[i].num = matrix[i][j];
                lines_min[i].hor_cord = i;
                lines_min[i].ver_cord = j;
            }
        }
    }

    int issaddle = 0;
    int saddle = 0;
    Point saddles[m];
    for(int i = 0; i < m; i++)
    {
        issaddle = 1;
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][lines_min[i].ver_cord] < matrix[i][j])
            {
                issaddle = 0;
                break;
            }
        }
        if(issaddle == 0)
        {
            continue;
        }
        else
        {
            saddle += 1;
            saddles[i] = lines_min[i];   
        }
    }
    if(saddle == 0)
    {
        printf("no\n");
    }
    else
    {
        for(int i = 0; i < saddle; i++)
        {
            printf("%d %d %d",saddles[i].hor_cord,saddles[i].ver_cord,saddles[i].num);
        }
    }
    return 0;
}