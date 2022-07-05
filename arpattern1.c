#include <stdio.h>
int main()
{
    int nth;
    float sum = 0, fact, val;
    printf("enter the nth term: ");
    scanf("%d", &nth);
    for (int i = 1; i <= nth; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        val = i / fact;
        printf("%f   ", val);
        sum += val;
    }
    printf("the sum of the given series till ntrh term is: %f", sum);

    return 0;
}