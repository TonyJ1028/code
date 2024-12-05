/*
标题:递归数列
问题描述	
一个数列A定义如下
A(1)=1，
A(2)=1/(1+A(1))，
A(3)=1/(1+A(2))，
……
A(n)=1/(1+A(n-1))。
定义一个函数function用来计算数列第n项的值，函数声明如下：
double function(int n);
注意：函数声明已包含在主程序中，只需要提交自定义的函数代码。
主程序如下：
#include<stdio.h>
double function(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%f\n",function(n));
	return 0;
}
主函数输入说明：	
输入为1个正整数n，n<=10。
主函数输出说明	
function函数返回数列A第n项的值给主函数。 主函数自行完成输出。

主函数输入样例	
5
主函数输出样例	
0.625000

提示	
所有浮点数使用双精度浮点型来运算。
*/
#include<stdio.h>
double function(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%f\n",function(n));
	return 0;
}

double function(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return 1 / (1 + function(n - 1));
    }
}
