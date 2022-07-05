#include <stdio.h>
int main()
{
    char l;
    int a,r;
    printf("Enter any letter: \n");
    scanf("%c",&l);
    a = l;
    if (a>=65 && a<=90)
    {
        r=a+32;
        printf("result: %c",r);
    }
    else if (a>=97 && a<=122)
    {
        r=a-32;
        printf("result: %c",r);
    }
    else
    {
        printf("enter a valid letter");
    }
    return 0;
}