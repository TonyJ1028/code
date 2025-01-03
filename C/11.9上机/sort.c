/*
标题: 按规则排序
问题描述：
给定 N 个不同的整数，要求对这 N 个整数按如下规则排序并输出。
规则一：所有的偶数排在奇数前面。
规则二：在规则一的前提下按照从大到小的顺序排序。
输入说明
数据由两行构成，第一行为整数 n（n<=100），表示待排序整数的数量。第二行是 n 个
整数，每个整数的取值区间都为[-32768~32767]，整数之间以空格间隔。
输出说明
在一行输出排好序的整数，整数之间以空格间隔。
输入样例
5
1 2 3 4 5
输出样例
4 2 5 3 1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] % 2 == 0 && a[j + 1] != 0)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

            if(a[j]> a[j + 1] && a[j + 1] % 2 != 0)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int a1[n];
    for (int i = n - 1; i >= 0; i--)
    {
        a1[n - 1 - i] = a[i];
    }

    int even;
    for (int i = 0; i < n; i++)
    {
        if(a1[i] % 2 != 0)
        {
            even = i;
            break;
        }
    }

    for (int i = 0; i < even; i ++)
    {
        for (int j = 0; j < even - i - 1; j++)
        {
            if(a1[j] < a1[j + 1])
            {
                int temp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");
    return 0;
}