#include <stdio.h>
#define PI 3.14
int main()
{
    float r,a;
   printf("Enter radius of circle:\n");
   scanf("%f",&r);
   a = PI*(r*r);
   printf("The area of circle is: %f",a);
   return 0;
}