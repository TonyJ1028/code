/*
题目名称 车牌限行
问题描述
受雾霾天气影响，某市决定当雾霾指数超过设定值时对车辆进行限行，假设车牌号全为数字，
且长度不超过 6 位，限行规则如下：
（1）限行时间段只包括周一至周五，周六周日不限行；
（2）如果雾霾指数低于 200，不限行；
（3） 如果雾霾指数大于等于 200 且低于 400，每天限行两个尾号的汽车，周一限行 1 和 6，
周二限行 2 和 7，周三限行 3 和 8，周四限行 4 和 9，周五限行 5 和 0；
（4） 如果雾霾指数大于等于 400，每天限行五个尾号的汽车，周一、周三和周五限行 1,3,5,7,9，
周二和周四限行 0,2,4,6,8。
现在给出星期几、雾霾指数和车牌号，判断该车牌号是否限行。
输入说明
输入分为三个整数，第一个整数表示星期几（1~7，1 表示周一，2 表示周二，依次类推，7
表示周日） ，第二个整数表示雾霾指数（0~600），第三个整数表示车牌号，整数之间用空格
分隔。
输出说明
限行输出 no。
输出为两个部分，第一部分为车牌最后一位数字，第二部分为限行情况，限行输出 yes，不
输入样例 1
4 230 80801
输出样例 1
1 no
输入样例 2
3 300 67008
输出样例 2
8 yes
*/
#include<stdio.h>
int main()
{
    int day, aqi, num;
    scanf("%d %d %d",&day,&aqi,&num);
    int lastnum = num % 10;
    switch(day)
    {
        case 6:
            printf("%d no\n",lastnum);
            break;
        case 7:
            printf("%d no\n",lastnum);
            break;
        default:
        
            if (aqi < 200)
                {printf("%d no\n",lastnum);}
            else if (aqi >= 400)
            {
                switch(day)
                {
                    case 1:
                    case 3:
                    case 5:
                        if (lastnum == 1 || lastnum ==3 || lastnum ==5 || lastnum == 7 || lastnum == 9){
                            printf("%d yes\n",lastnum);}
                        else{
                            printf("%d no\n",lastnum);}
                        break;
                        
                    case 2:
                    case 4:
                        if (lastnum == 1 || lastnum ==3 || lastnum ==5 || lastnum == 7 || lastnum == 9){
                            printf("%d no\n",lastnum);}
                        else{
                            printf("%d yes\n",lastnum);}
                        break;
                }
            
            }
            else
            {
                switch (day)
                {
                case 1:
                    if (lastnum == 1 || lastnum == 6){
                        printf("%d yes\n",lastnum);}
                    else{
                        printf("%d no\n",lastnum);}
                    break;
                case 2:
                    if (lastnum == 2 || lastnum == 7){
                        printf("%d yes\n",lastnum);}
                    else{
                        printf("%d no\n",lastnum);}
                    break;
                case 3:
                    if (lastnum == 3 || lastnum == 8){
                        printf("%d yes\n",lastnum);}
                    else{
                        printf("%d no\n",lastnum);}
                    break;
                case 4:
                    if (lastnum == 4 || lastnum == 9){
                        printf("%d yes\n",lastnum);}
                    else{
                        printf("%d no\n",lastnum);}
                    break;
                case 5:
                    if (lastnum == 5 || lastnum == 0){
                        printf("%d yes\n",lastnum);}
                    else{
                        printf("%d no\n",lastnum);}
                    break;
                }
            }
    }    
    return 0;
}