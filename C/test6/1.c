#include<stdio.h>
void split(int step, int n, int last,int a[9]);
int main()
{
    int n;
    int a[9];
    scanf("%d",&n);
    split(1, n, 1, a);
    return 0;
}

void split(int step, int n, int last,int a[9])
{
    if(n == 0 && step > 2)
    {
        for(int i = 1; i <= step - 2; i++)
        {
            printf("%d+",a[i]);
        }
        printf("%d",a[step - 1]);
        printf("\n");
        return;
    }
    for(int i = last; i <= n; i++)
    {
        a[step] = i;
        split(step + 1, n - i, i, a);
    }
}
