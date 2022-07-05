#include <stdio.h>
char convert(char w)
{

    if (w>=65 && w<=90)
    {
        return w+32;
        //printf("result: %c",r);
    }
    else if (w>=97 && w<=122)
    {
        return w-32;
        //printf("result: %c",r);
    }
    
}
int main()
{
    char w;
    printf("Enter any string character: \n");
    scanf("%c",&w);
    printf("%c",convert(w));
    return 0;
}