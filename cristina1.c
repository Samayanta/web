#include <stdio.h>
int main()
{
    int array[100], size, even_sum = 0, even_count = 0, odd_sum = 0, odd_count = 0, i;
    printf("enter size of array: ");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("enter value of array[%d]", i);
        scanf("%d", &array[i]);
    }
    printf("array elements are: \n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("\n array[%d]=%d", i, array[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_sum += array[i];
            even_count++;
        }
        else
        {
            odd_sum += array[i];
            odd_count++;
        }
    }
    printf("\n sum of even elements is %d and no.of even elements is %d", even_sum, even_count);
    printf("\n sum of odd elements is %d and no of odd elements is %d", odd_sum, odd_count);
    return 0;
}