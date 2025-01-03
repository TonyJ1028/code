#include<stdio.h>
#include<stdbool.h>
typedef struct date
{
    int year;
    int month;
    int day;
} date;

int main()
{
    struct date today = {2024, 12, 2};

    struct date yesterday = {.day = 1, .month = 12, .year = 2024};

    printf("%i\n",yesterday.day);
    
    printf("%i\n",today.day);

    today = yesterday;

    printf("%i\n",yesterday.day);
    
    printf("%i\n",today.day);
    
           
    return 0;
}