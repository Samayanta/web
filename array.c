#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 67, 8, 9, 78};
    int i;

    for (i = 0; i <= 9; i++)
    {
        printf("values in position %d\n", i);
        printf("%d\n", a[i]);
        printf("address \t %d \n", &a[i]);
        printf("\a");
    }
    return 0;
}