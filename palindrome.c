#include <stdio.h>
int main()
{
    int i=0,s=0,r=0,n=0,p=0;
    printf("Enter any multi-digit number: \n");
    scanf("%d",&n);
    p=n;
    while (n!=0)
    {
        r=n%10;
        s= s*10+r;
        n=n/10;

    }
    printf("%d\t",s);
    if (s==p)
    {
        printf("%d is a palindorme number.",p);
    }
    else
    {
        printf("%d is not a palindorme number.",p);
    }
    return 0;
}