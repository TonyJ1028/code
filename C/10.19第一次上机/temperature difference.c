/*
标题
气温波动
类别
流程控制
时间限制
1S
内存限制
256Kb
问题描述
最近一段时间气温波动较大。 已知连续若干天的气温， 请给出这几天气温的最大波动值是多少，
即在这几天中某天气温与前一天气温之差的绝对值最大是多少。
输入说明
输入数据分为两行。
第一行包含了一个整数 n，表示给出了连续 n 天的气温值，2 ≤ n ≤ 30。
第二行包含 n 个整数，依次表示每天的气温，气温为-20 到 40 之间的整数。
输出说明
输出一个整数，表示气温在这 n 天中的最大波动值。
输入样例
6
2 5 5 7 -3 5
输出样例
10
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);

    int temp_of_days[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&temp_of_days[i]);
    }

    int max_difference = 0;
    int curr_difference = 0;
    for(int i = 1; i < n; i++)
    {
        curr_difference = abs((temp_of_days[i]) - (temp_of_days[i - 1]));
        if(curr_difference > max_difference)
            {
                max_difference = curr_difference;
            }
    }
    printf("%d\n",max_difference);
    return 0;
}