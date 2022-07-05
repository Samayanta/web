#include <stdio.h>
int main()
{
    int num1, num2;
    char menu;
    printf("Enter any two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter A for ADDITION \nEnter S for SUBTRACTION\nEnter M for MULTIPLICATION\nEnter D for DIVISION \nEnter T for Square\nEnter C for Cube\n");
    scanf("  %c",&menu);
    switch (menu)
    {
        case 'A':
        case 'a': printf("%d + %d = %d",num1,num2,num1+num2);
        break;
        
        case 'S':
        case 's': printf("%d - %d = %d",num1,num2,num1-num2);
        break;

        case 'M':
        case 'm': printf("%d * %d = %d",num1,num2,num1*num2);
        break;

        case 'D':
        case 'd': printf("%d / %d = %d",num1,num2,num1/num2);
        break;

        case 'T':
        case 't': printf("%d sq= %d \t %dsq = %d",num1,num1*num1,num2,num2*num2);
        break;

        case 'C':
        case 'c': printf("%dsq= %d \t %dsq = %d",num1,num1*num1*num1,num2,num2*num2*num2);
        break;
    
    default: printf("Enter a valid character for problem!!!!!!");
        break;
    }
    return 0;

}