#include <stdio.h>
int main()
{
    int array[100], size, i, j, temp;
    printf("Enter the size of array \n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter the values according to your size \n");
        scanf("%d", &array[i]);
    }
    printf("The unsorted array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            temp = array[j];
            if (array[j] > array[j + 1])
            {
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("sorted array\n");
    printf("The sorted array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}