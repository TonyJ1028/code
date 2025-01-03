/*
题目：序列分段求和
问题描述
给定一个整数数列，数列中连续相同的最长整数序列算成一段，对数列同一段的数字进
行段内求和，输出段内数值累加和最大的值。
输入格式
输入的第一行包含一个整数n，表示数列中整数的个数。
第二行包含n个整数 a1，a2，⋯an，表示给定的数列，相邻的整数之间用一个空格分隔。
输出格式
输出一个整数，表示段内数字累加和的最大值。
样例输入
11
0 9 9 9 1 1 1 1 1 8 7
样例输出
27
样例说明
0是第一段，999是第二段，11111是第三段，8是第四段，7是第五段，9+9+9=
27，27 是最大值。
评测用例规模与约定
1 ≤ n ≤ 1000, 0 ≤ ai ≤ 1000.
 */
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0;i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int current_sum = 1;
    int max_sum = 0;
    for (int i = 1; i < n; i++)
    {
        
        if (arr[i] == arr[i - 1])
        {
            current_sum += arr[i];
        }
        else
        {
            if(current_sum >= max_sum)
            {
                max_sum = current_sum;
            }
            current_sum = arr[i];
        }
        
    }
    if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }

    printf("%d\n",max_sum);
    return 0;
}