#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year: \n");
    scanf("%d",&y);
    if (y%4 == 0)
    {
        printf("Its a leap year.");
    }
    else
    {
        printf("Its not a leap year.");
    }
    return 0;
}