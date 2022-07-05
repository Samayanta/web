#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, k;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of second matrix\n");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                multiply[c][d] = 0;
                for (k = 0; k < p; k++)
                {
                    multiply[c][d] = multiply[c][d] + first[c][k] * second[k][d];
                }
            }
        }

        printf("Product of entered matrices:-\n");

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}