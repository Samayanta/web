#include <stdio.h>
int main()
{
    int i=1,n,f=1;
    printf("Enter any number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         f=f*i;
    }
    printf("the factorial of %d is: %d",n,f);
    return 0;
}