#include <stdio.h>
int main()
{
    int a=1,b=2,c=3,i;
    for (i=0;i<=10;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n",a,b,c,b,a);
        a= a+3;
        b=b+3;
        c=c+3;
    }
    return 0;
}