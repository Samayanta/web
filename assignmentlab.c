#include <stdio.h>
int main()
{
    float f,i,ti,kg,m,vr;
    printf("Enter your height in feet and inches: \n");
    scanf("%f%f",&f,&i);
    printf("Enter your weight in kg: \n");
    scanf("%f",&kg);
    ti=(f*12)+i;
    m=ti*0.0254;
    vr=kg/(m*m);
    printf("Total inches of your height: %f \n",ti);
    printf("Total height in meter: %f \n",m);
    printf("Variable Ratio: %f",vr);
}