#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    float A,V;
    printf("Enter radius of sphere: \n");
    scanf("%d",&r);
    A=PI*r*r*4;
    V=(4.0/3)*PI*r*r*r;
    printf("The Area of sphere is: %f cm sq\n",A);
    printf("The Volume of sphere is: %f cm cube\n",V);
    return 0;
}