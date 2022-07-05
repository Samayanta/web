#include <stdio.h>
int main()
{
    float fact,i,sum=0,num,j;
    printf("enter the Nth term\n");
    scanf("%f",&num);
    for(i=1; i<=num; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        
        sum += i/fact ;
    }
    printf("Sum of series %f \n", sum);
    return 0;
}