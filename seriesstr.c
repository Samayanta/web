#include <stdio.h>
int main()
{
    int i;
    char str[50] = "this is c progrtamming";
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0)
        {
            str[i] -= 32;
            printf("%c", str[i]);
        }
        else if (str[i] == ' ')
        {
            printf("\n");
            str[i + 1] -= 32;
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}