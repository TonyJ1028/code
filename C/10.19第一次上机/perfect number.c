/*
标题: 完数
问题描述:
请写一个程序，给出指定整数范围[a，b]内的所有完数，0 < a < b < 10000。
一个数如果恰好等于除它本身外的所有因子之和，这个数就称为"完数"
。例如 6
是完数，因为 6=1＋2＋3。
输入说明
输入为两个整数 a 和 b，a 和 b 之间用空格分隔。
输出说明
输出[a，b]内的所有完数，每输出一个完数换行。
输入样例
1 10
输出样例
6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    for(int i = a; i < b; i++)
    {
        int sum = 1;
        for(int j = 2; j <= (int)sqrt(i); j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
                if(j != i / j)
                {
                    sum += i / j;
                }
            }
        }
        if(sum == i && i != 1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}