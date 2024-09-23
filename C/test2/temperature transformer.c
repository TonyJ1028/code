#include<stdio.h>
int main()
{
    char t;
    printf("请输入被转换的温度的单位(C或F)\n");
    scanf("%c",&t);
    if (t == 'C')
    {
        int c1;
        printf("请输入你要转换的摄氏温度:\n");
        scanf("%d",&c1);
        double f = c1 * 1.8 + 32;
        printf("转换后的温度为:%f\n",f);
    }
    else if (t == 'F')
    {
        int f1;
        printf("请输入你要转换的华氏温度:\n");
        scanf("%d",&f1);
        double C = (f1 - 32) * 5.0 / 9.0;
        printf("转换后的温度为:%f\n",C);
    }
    else
    {
        printf("输入错误！\n");
    }
    
    return 0;
}