#include <stdio.h>
int main()
{
    float f,t;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&f);
    printf("%f",f);
  if ( f >.f1 && f<=60)
    {
        printf("It's cold dayyyyyyy\n");
    }
    else if (f>60 && f<80)
    {
        printf("It's normal dayyyyyyy\n");
    }
    else if (f>=80)
    {
        printf("It's hot dayyyyyyy\n");
    }
    else  
    {
        printf("Your input can't be processed");
    }
    return 0;
}