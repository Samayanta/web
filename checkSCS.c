#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character or symbol");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("You entered a capital alphabet %c", c);
    }
    else if (c >= 97 && c <= 122)
    {
        printf("You entered a small alphabet %c", c);
    }
    else if (c >= 48 && c <= 57)
    {
        printf("You entered a small alphabet %c", c);
    }
    else if (c >= 0 && c <= 47 && c <= 48 && c <= 64 && c <= 123 && c <= 127)
    {
        printf("You entered a special symbol %c", c);
    }
    else
    {
        printf("Enter a valid character");
    }
    return 0;
}