/*
题目：数字排序
问题描述
输入格式
输出格式
给定n 个整数，请计算每个整数各位数字和，按各位数字和从大到小的顺序输出。
输入的第一行包含一个整数 n，表示给定数字的个数。
第二行包含n 个整数，相邻的整数之间用一个空格分隔，表示所给定的整数。
输出多行，每行包含两个整数，分别表示一个给定的整数和它的各位数字和。按各位数
字和递减的顺序输出。如果两个整数各位数字和相同，则先输出值较小的，然后输出值较大
的。
样例输入
5
101 100 999 1234 110
样例输出
999 27
1234 10
101 2
110 2
100 1
评测用例规模与约定
1 ≤ n ≤ 1000，给出的数都是不超过10000 的非负整数。
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &num[i]);
    }
    int sum[n];
    for(int i = 0; i < n; i++)
    {
        int temp = num[i];
        sum[i] = 0;
        while(temp)
        {
            sum[i] += temp % 10;
            temp /= 10;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(sum[i] < sum[j])
            {
                int temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
            else if(sum[i] == sum[j] && num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", num[i], sum[i]);
    }
    
    return 0;
}