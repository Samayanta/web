#include <stdio.h>
void swap(float a , float b)
{
    //a= 2 b=3
    b=a+b; // 5
    a=b-a;//2
    b=b-a;
    printf("frst%f sec%f",a,b);
}
int main()
{
    float a,b;
    printf("Enter any two random numbers: \n");
    scanf("%f%f",&a,&b);
    swap(a,b);
    return 0;
}