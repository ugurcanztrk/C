#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int limit = 2;

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j < limit; j++)
            printf("%d ", j);
        printf("\n");

        if (i < n)
            limit++;
        else
            limit--;
    }

    return 0;
}
