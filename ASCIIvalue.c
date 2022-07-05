//WAP to get char and print ASCII value
#include <stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    printf("%d is the ASCII value of %c",a,a);
    return 0;
}