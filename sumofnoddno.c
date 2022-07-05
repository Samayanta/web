#include <stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter any number: \n");
    scanf("%d",&n);
    for (i=1;i<=n;i+=2)
    {
        s = s + i ;
    }
    printf("The sum of odd number upto %d is: %d",n,s);
    return 0;
}