#include <stdio.h>
int main()
{
    int nth;
    printf("enter the value for nth terms: ");
    scanf("%d", &nth);
    for (int i = 1; i <= nth; i++)
    {
        printf("%d  ", (2 * i - 1));
    }
}