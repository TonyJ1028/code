/*
题目：四则运算
问题描述：
输入两个整数和一个四则运算符，根据运算符计算并输出其运算结果（和、
差、积、商、余之一） 。注意做整除及求余运算时，除数不能为零。
输入说明：
符之间没有空格。
注意：运算符包含+（加） 、-（减） 、
使用 scanf()函数输入两个整数和一个运算符，格式见输入样例，数字和运算
*（乘） 、/（除）和%（求余）几种。
输出说明：
输出使用 printf()函数，格式见输出样例。
输入样例：
5%2
输出样例：
5%2=1
用例规模与约定：
输入整数在区间[-5000, 5000]之内，且作为整除和求余运算的操作数时，保证
除数不为 0。
*/
#include<stdio.h>
int main()
{
    int n1, n2, r;
    char op;
    scanf("%d %c%d",&n1,&op,&n2);

    switch(op)
    {
        case '+':
            r = n1 + n2;
            printf("%d+%d=%d\n",n1,n2,r);
            break;
        case '-':
            r = n1 - n2;
            printf("%d-%d=%d\n",n1,n2,r);
            break;
        case '*':
            r = n1 * n2;
            printf("%d*%d=%d\n",n1,n2,r);
            break;
        case '/':
            while(n2 == 0)
            {
                printf("除数不能为0,请重新输入：\n");
                scanf("%d",&n2);
            }
            r = n1 / n2;
            printf("%d/%d=%d\n",n1,n2,r);
    }
    return 0;
}