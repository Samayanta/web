#include <stdio.h>
int main()
{
    float tm, cr, rc;
    char rem;
    printf("Enter the product(A/B): \n");
    scanf("%c", &rem);
    if (rem == 'a' || rem == 'A')
    {
        printf("How much did you sold: \n");
        scanf("%f", &tm);
        cr = (6.0 / 100) * 2000;
        tm = tm - 2000; // 1000
        rc = (7.0 / 100) * tm;
        cr = cr + rc;
        printf("The commission rate for product A is: %f", cr);
    }
    else if (rem == 'b' || rem == 'B')
    {
        printf("How much did you sold: \n");
        scanf("%f", &tm);
        cr = (10.0 / 100) * 4000

            ;
        tm = tm - 4000;
        rc = (12.0 / 100) * tm;
        cr = cr + rc;
        printf("The commission rate for product B is: %f", cr);
    }
    else
    {
        printf("Your input cant be processed:\n");
    }
    return 0;
}