#include <stdio.h>
int main()
{
    int A= 10,B=5;
    A=(++A) + (++A);
    B= --(A) - (--B);
    printf("First increment: %d\n",A);
    printf("Second increment: %d",B);
    return 0;
}