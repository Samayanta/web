#include <stdio.h>
int main()
{
    int a[50];
    int size, i;
    printf("Enter your size of array\n");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("Enter the first element: \t");
        scanf("%d", &a[i]);
        printf("Entered Data:\t %d\n", a[i]);
        printf("bytes allocated: %d", sizeof(a));
    }
    return 0;
}