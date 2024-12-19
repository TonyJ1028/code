#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);

    int *a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}