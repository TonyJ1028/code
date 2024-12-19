/*
给出正整数n（2<=n<=10）,输出杨辉三角前n行
杨辉三角性质：三角形中的每个数字等于它两肩上的数字相加


输入格式：输入一个正整数n
输出格式：输出杨辉三角的前n行，元素中间用一个空格分隔，每行用换行分隔

输入样例：
4

输出样例
1
1 1
1 2 1
1 3 3 1
*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    n += 1;
    
    int triangle[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i - 1)
            {
                triangle[i][j] = 1;
                continue;
            }
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%d ",triangle[i][j]);
        }
        printf("\n");
    }
    return 0;
}