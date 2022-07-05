#include <stdio.h>
int main ()
{
    int a=0,b=1,c=1,i;
    for (i=0;i<=10;i++)
    {
        printf("%d \n",a);//0 1
        printf("%d \n",b);//1 2
        c=a+b;// 1 3
        a=c; //1  3
        b=b+a; //2   
    }
    return 0;
}