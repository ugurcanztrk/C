#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int spaces = n, start = 2, right = n;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i < spaces; i++)
            printf(" ");
        spaces--;

        if (row >= 2)
        {
            for (int j = start; j >= 2; j--)
                printf("%d ", j);
            start++;
        }

        for (int k = 1; k <= right; k++)
            printf("%d ", k);
        right--;
        printf("\n");
    }

    return 0;
}
