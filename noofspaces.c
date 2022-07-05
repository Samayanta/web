#include <stdio.h>
#include <string.h>
int main()
{
    int l=0,co=0;
    char c[25]={"Hello I am a Programmer."};
    l = strlen(c);
    for(int i=0;i<=l;i++)
    {
        if (c[i]==' ')
        {
            co = co + 1;
        }
    }
    printf("No of spaces: %d",co);
    return 0;
}