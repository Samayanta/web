#include <stdio.h>
#include <math.h>
int main()
{
    int nth, power = 1;
    float sum = 0, fact, val;
    printf("enter the nth term: ");
    scanf("%d", &nth);
    for (int i = 1; i <= nth; i++)
    {
        fact = 1;
        for (int j = 1; j <= power; j++)
        {
            fact *= j;
        }
        val = pow(power, power) / fact;
        printf("%f  ", val);
        sum += val;
        power += 2;
    }
    printf("the sum of the given series till ntrh term is: %f", sum);

    return 0;
}