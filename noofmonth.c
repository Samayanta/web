#include <stdio.h>
int main()
{
    int num;
    char months[12][10] = {"Janaury","February","March","April","March","June","July","August","September","October","November","December"};
    printf("Enter any number from 1-12\n");
    scanf("%d",&num);
    printf("The number related to %d is %s",num,months[num-1]);
    return 0;
}