#include<stdio.h>

int fibo(int f);

int fibo(int f)
{
    if(f == 0 || f == 1)
    {
        return 1;
    }
    else
    {
        return fibo(f - 2) + fibo(f - 1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}

