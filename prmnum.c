#include <stdio.h>
int main()
{
    int i, n = 500, count = 0;
    while (n != 1)
    {
        count = 0;
        for (i = n; i >= 1; i--)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\t", n);
        }
        n--;
    }
    return 0;
}