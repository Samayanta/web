#include <stdio.h>
int main()
{
    int base, power, exp, i;
    printf("Enter base for given number\n");
    scanf("%d", &base);
    printf("Enter power for base\n");
    scanf("%d", &exp);
    for (i = 1; i <= base; i++)
    {
        power *= base;
    }
    printf("power %d", power);
    return 0;
}