#include <stdio.h>
int num(int n)
{
    int c=0;
    while (n!=0)
    {
        n=n/10;
        c+=1;
    }
    return c;
}
int main()
{
    int n;
    printf("Enter any multidigit integer: \n");
    scanf("%d",&n);
    printf("no of digits is: %d",num(n));
    return 0;
}