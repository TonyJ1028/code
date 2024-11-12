#include<stdio.h>
int power(int base,int exponential);

int power(int base, int exponential)
{
    int result = 1;
    for(int i = 1;i <= exponential; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int a = 2;
    int b = 0;
    scanf("%d",&b);
    int r = power(a, b);
    printf("%d\n",r);
    return 0;
}
