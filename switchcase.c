#include <stdio.h>
int fact( int );
int main()
{
    int n;
    printf("Enter any integer number: \n");
    scanf("%d",&n);
     fact(n);
     return 0;
}
int fact( int n)
{
    int f=1,i=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial: %d",f);
    return 0;
}