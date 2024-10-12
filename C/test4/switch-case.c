#include<stdio.h>
int main()
{
    int type;
    scanf("%d",&type);
    switch (type)
    {
        case 1:
            printf("Type 1 succeed\n");
            break;
        case 2:
            printf("Type 2 succeed\n");
            break;
        case 3:
            printf("Type 3 succeed\n");
            break;
        case 4:
            printf("Type 4 succeed\n");
            break;
        default:
            printf("Failed!\n");
    }
    return 0;
}