#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",fib(n));

    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 7;
    }
    else if (n == 1)
    {
        return 11;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
