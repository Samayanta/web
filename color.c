#include <stdio.h>
int main()
{
    char color;
    printf("Enter the first alphabet of the color i.e. 'R for red, G for green, B for blue, K for black \n");
    scanf("%c",&color);
    switch (color)
    {
        case 'R':
        case 'r': printf("RED");
        break;

        case 'g':
        case 'G': printf("GREEN");
        break;

        case 'B':
        case 'b': printf("BLUE");
        break;

        case 'K':
        case 'k': printf("BLACK");
        break;


    default: printf("Enter an valid input!!!!");
        break;
    }
    return 0;
}