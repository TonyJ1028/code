#include<stdio.h>

void swap(int *x,int *y);

void swap(int *x, int *y)
{
    int t = *x; *x = *y; *y = t;
}

int main()
{
    int a = 5,b = 10;
    swap(&a, &b);
    printf("%d %d\n",a ,b);
    return 0;
}


