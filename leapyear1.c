#include <stdio.h>
int main()
{
    int year,divisor;
    printf("Enter the current year\n");
    scanf("%d",&year);
    divisor = year%100 == 0 ? 400: 4;
    year % divisor == 0 ? printf("It's aleap year.") : printf("It's not a leap year.");
    // if (year % 100 == 0)
    // {
    //     if (year % 400 == 0)
    //     {
    //         printf("It's a century leap year.");
    //     }
    //     else
    //     {
    //         printf("It's a century leap year.");
    //     }
    // }
    // else
    // {
    //    if (year % 4 == 0)
    //     {
    //         printf("It's a non-century leap year.");
    //     }
    //     else
    //     {
    //         printf("It's not a non-century leap year");
    //     }  
    // }
    return 0;
}