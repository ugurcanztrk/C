#include <stdio.h>

int main()
{
    int arr[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }

    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
            sum += arr[i][j];
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}
