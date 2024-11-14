/*
标题: 矩阵元素求和并排序 
问题描述  
请写一个程序，对于一个m行m列（2＜m＜20）的方阵，求其每一行、每一列及主、
辅对角线元素之和，然后按照从大到小的顺序依次输出这些值。 
注：主对角线是方阵从左上角到右下角的一条斜线，辅对角线是方阵从右上角到左下角
的一条斜线。 
输入说明  
输入数据的第一行为一个正整数m； 
接下来为m行、每行m个整数表示方阵的元素。 
输出说明  
从大到小排列的一行整数，每个整数后跟一个空格，最后换行。 
输入样例  
4 
15  8   -2   6 
31  24  18  71 
-3  -9   27  13 
17  21  38  69 
输出样例  
159 145 144 135 81 60 44 32 28 27 
样例说明：每行的元素之和分别为：27,144,28,145；每列的元素之和分别为：60,44,81,159；
主辅对角线元素之和分别为：135,32。这 10 个和值按照从大到小排列的顺序为：
159,145,144,135,81,60,44,32,28,27。
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m;
    scanf("%d",&m);

    int matrix[m][m];
    for(int line = 0; line < m; line++)
    {
        for(int column = 0; column < m; column++)
        {
            scanf("%d",&matrix[line][column]);
        }
    }

    int sum[2 * m + 2];

    for(int i = 0; i < 2 * m + 2; i++)
    {
        sum[i] = 0;
    }

    for(int line = 0; line < m; line++)
    {
        for(int column = 0; column < m; column++)
        {
            sum[line] += matrix[line][column];//sum of the line
        }
    }

    for(int column = m; column < 2 * m; column++)
    {
        for(int line = 0; line < m; line++)
        {
            sum[column + m] += matrix[line][column];//sum of the column
        }
    }

    for(int coordinate = 0; coordinate < m; coordinate++)//diagnoal sum
    {
        sum[2 * m] += matrix[coordinate][coordinate];//leading
        sum[2 * m + 1] += matrix[coordinate][abs(m - coordinate - 1)];//axis
    }

    for (int i = 0; i < 2 * m + 1; i++) 
    {
        for (int j = 0; j < 2 * m + 1; j++) 
        {
            if (sum[j] > sum[j + 1]) {
                // 交换 numbers[j] 和 numbers[j + 1]
                int temp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = temp;
            }
        }
    }

    for(int i = 2 * m + 1; i >= 0; i--)
    {
        printf("%d ",sum[i]);
    }
    
    return 0;
}