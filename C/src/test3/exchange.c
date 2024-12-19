#include<stdio.h>
int main()
{
    double p,fu;//initiate
    printf("Please insert the total price:\n");
    scanf("%lf",&p);
    printf("Please insert the payment:\n");
    scanf("%lf",&fu);

    if (fu < p)
    {
        printf("Payment not enough!\n");
    }

    if (fu >= p)
    {
        double ex = fu - p;
        printf("The exchange is:%.2lf\n",ex);
    }

    return 0;
}