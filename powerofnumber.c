#include <stdio.h>
int main()
{
    int base, exponent;
    double power = 1;
    printf("enter the value for base: ");
    scanf("%d", &base);
    printf("enter the value for power: ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; i++)
    {
        power *= base;
    }
    printf("the value of %d to power %d is %.2lf", base, exponent, power);
    return 0;
}