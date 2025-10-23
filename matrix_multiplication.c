#include <stdio.h>

int main()
{
    int A[3][4] = {{1, 3, 2, 2}, {1, 5, 4, 3}, {11, 2, 5, 4}};
    int B[4][5] = {{1, 2, 3, 4, 5}, {3, 4, 5, 6, 1}, {2, 4, 6, 8, 5}, {5, 1, 3, 9, 3}};
    int C[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int sum = 0;
            for (int k = 0; k < 4; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
