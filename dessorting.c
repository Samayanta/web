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
    for (i =0; i < size - 1; i++) // yo ek indexing badi najaos bhanerw -1 gariyeko ho.......j loop ma paniu -1 ek indexing bhanda agadi najaos bhanerw ho kinw bhane hamle j+1 ko value j ma haliyeko xw
    // that is!!!!!
    {
        for (j = 0; j < size - 1; j++)
        {
            temp = array[j];
            if (array[j] < array[j + 1])
            {
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("sorted array\n");
    printf("The  descending sorted array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}