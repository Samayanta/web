#include <stdio.h>
#include <math.h>
int main()
{
    int b,p=0,d=0,r=0,i;
    printf("Enter number in binary digits upto 10 digits: \n");
    scanf("%d",&b); //1010
    for( i=0;i<10;i++)
    {
       r=b%10;  // 0
       d=d+(pow(2,p)*r); //0+2^0*0 
       b=b/10; 
       p=p+1;
    }
    printf("The binary to decimal is: %d",d);
    return 0;
}