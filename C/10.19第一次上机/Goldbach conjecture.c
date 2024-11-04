/*
标题：歌德巴赫猜想
问题描述：
德巴赫猜想： 任意一个大偶数都能分解为两个素数的和。 对于输入的一个正偶数，写一
个程序来验证歌德巴赫猜想。 由于每个正偶数可能分解成多组素数和，仅输出分解值分别是
最小和最大素数的一组。
输入说明
输入一个正偶数 n，1<n<1000。
输出说明
输出两个整数，分别表示分解出的最小和最大素数，整数之间以空格分隔。
输入样例
10
输出样例
3 7
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        j = n - i;
        int i_is_Prime = 1, j_is_Prime = 1;

        if (i > 1)
        {
            for (int k = 2; k <= (int)sqrt(i); k++)
            {
                if(i % k == 0)
                {
                    i_is_Prime = 0;
                    break;
                }
            }
        }
        else{i_is_Prime = 0;}

        if(j > 1)
        {
            for(int k = 2; k <= (int)sqrt(j); k++)
            {
                if(j % k == 0)
                {
                    j_is_Prime = 0;
                    break;
                }
            }
        }
        else{j_is_Prime = 0;}

        if (i_is_Prime == 1 && j_is_Prime == 1)
        {
            printf("%d %d\n",i, j);
            return 0;
        }
    }
}