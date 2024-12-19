/*
题目描述：
编写程序，根据某城市普通出租车收费标准进行车费计算。标准如下：
（1）起步里程为 3 公里，起步费 10 元；
（2）超出起步里程后在 10 公里（含）内，每公里 2 元；
（3）超过 10 公里以上的部分加收 50%的回空补贴费，即每公里 3 元；
营运过程中，因路阻及乘客要求临时停车等待的，按每 5 分钟 2 元计费(不足
5 分钟不收费)。
输入说明：
输入一个浮点数和一个整数， 表示行驶里程（单位为公里，精确到小数点后 1 位）
与等待时间（整数，单位为分钟），其间以空格分隔
输出说明：
在一行中输出乘客应支付的车费（单位为元），结果四舍五入保留整数。
输入样例：
40.0 7
输出样例:
116
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float distance = 0.0;
    int time = 0;
    scanf("%f %d",&distance,&time);//insert the distance and time

    float dprice = 0.0;int tprice = 0;

    if (distance <= 3.0)
    {
        dprice = 10.0;
    }
    else if (distance > 10.0)
    {
        distance = distance - 10.0;
        dprice = 24.0 + distance * 3;
    }
    else
    {
        distance = distance - 3;
        dprice = 10 + distance * 2;
    }
    tprice = ((int)time / 5) * 2;
    int price = tprice + round(dprice);
    printf("%d\n",price);
    return 0;
}