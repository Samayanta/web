#include <stdio.h>
int main()
{
    int val = 1, nth;
    printf("enter the nth term of the series: ");
    scanf("%d", &nth);
    for (int i = 0; i < nth; i++)
    {
        printf("%d  ", val);
        val += 4;
    }
}