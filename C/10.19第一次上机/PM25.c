/*
标题：PM2.5
问题描述
PM2.5 分级标准为：
一级优（0<=PM2.5<=50）
二级良（51<=PM2.5<=100 为）
三级轻度污染（101<=PM2.5<=150）
四级中度污染（151<=PM2.5<=200）
五级重度污染（201<=PM2.5<=300）
六级严重污染（PM2.5>300）
给出一组 PM2.5 数据，按以下分级标准统计各级天气的天数，并计算出 PM2.5 平均值。
输入说明
输入分为两行，
第一行是一个整数 n 表示天数（1<n<=100）；
第二行为 n 个非负整数 Pi（0<=Pi<=1000），表示每天的 PM2.5 值，整数之间用空格分隔。
输出说明
输出两行数据，
第一行为 PM2.5 平均值，结果保留 2 位小数；
第二行依次输出一级优，二级良，三级轻度污染，四级中度污染，五级重度污染，六级严重
污染的天数，数据之间以空格分隔。
输入样例
10
50 100 120 80 200 350 400 220 180 165
输出样例
186.50
1 2 1 3 1 2
*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);

    int aqi[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&aqi[i]);
        sum += aqi[i];
    }
    float avg = 0;
    avg = (float)sum / (float)n;
    printf("%.2f\n",avg);

    int level[6] = {0};
    for(int i = 0; i < n; i++)
    {
        if(aqi[i] <= 50){level[0]++;}
        else if(aqi[i] > 50 && aqi[i] <= 100){level[1]++;}
        else if(aqi[i] > 100 && aqi[i] <= 150){level[2]++;}
        else if(aqi[i] > 150 && aqi[i] <= 200){level[3]++;}
        else if(aqi[i] > 200 && aqi[i] <= 300){level[4]++;}
        else{level[5]++;}
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d ",level[i]);
    }
    return 0;
}