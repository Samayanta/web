#include <stdio.h>
int factorial( int n )
{
    if (n==1){
        return 1;
    }
    else
    {
    return n* factorial(n-1);
    }    
}
int main()
{
    int n=0,fact=0;
    printf("Enter any number to factorial of it \n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial %d",fact);
    return 0;
}