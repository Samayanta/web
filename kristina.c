#include <stdio.h>
int main()
{
    int size; 
    printf("enter the size of array: ");
    scanf("%d", &size);
    int i, array1[size], array2[size], array3[size];
    for (i = 0; i <= size - 1; i++)
    {
        printf("enter the value of array1[%d]", i);
        scanf("%d", &array1[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        printf("enter the value of array2[%d]", i);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        array3[i] = array1[i] + array2[i];
        printf("the resultant value after addition in third array: %d\n", array3[i]);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int i, array1[100], array2[100], array3[100], size1, size2, size3;
//     printf("enter the size of array1: ");
//     scanf("%d", &size1);
//     printf("enter the size of array2: ");
//     scanf("%d", &size2);
//     printf("enter the size of array3: ");
//     scanf("%d", &size3);
//     for (i = 0; i <= size1 - 1; i++)
//     {
//         printf("enter the value of array1[%d]", i);
//         scanf("%d", &array1[i]);
//     }
//     for (i = 0; i <= size2 - 1; i++)
//     {
//         printf("enter the value of array2[%d]", i);
//         scanf("%d", &array2[i]);
//     }
//     for (i = 0; i <= size3 - 1; i++)
//     {
//         array3[i] = array1[i] + array2[i];
//         printf("the resultant value after addition in third array: %d\n", array3[i]);
//     }
//     return 0;
// }
