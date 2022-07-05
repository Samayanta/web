#include <stdio.h>
int main()
{
    int array[100], size, i, num;
    printf("enter the size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter the elements in array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n enter the number to be check:  ");
    scanf("%d", &num);
    for (i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            printf("\n %d number is present", num);
            printf("\n the position of number in array is array[%d]= %d", i, array[i]);
        }
    }
    return 0;
}