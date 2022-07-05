#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter value of a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);

    float r1,r2;
    r1= (-b+pow((pow(b,2)-4*a*c),0.5))/(2*a);
    r2= (-b-pow((pow(b,2)-4*a*c),0.5))/(2*a);

    printf("r1: %f\n",r1);
    printf("r2: %f",r2);
    return 0;
}