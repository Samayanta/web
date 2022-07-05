#include <stdio.h>
#include <string.h>
int main()
{
    char c[30];
    int l;
    printf("Enter your Name\n");
    gets(c);
    l= strlen(c);
    printf("Hello %s",c);
    printf("Length of your name is: %d",l);
    return 0;
}