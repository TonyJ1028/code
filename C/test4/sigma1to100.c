#include<stdio.h>
int main()
{
    int i = 1;int n = 0;
    while (i <= 100)
    {
    n = n + i;
    i++;
    }
    printf("%d",n);
    return 0;
}