#include <stdio.h>
int main()
{
    int i=100,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i % 7 == 0)
        {
            sum += i ;
        }
    }
    printf("Sum %d",sum);
    return 0;
}