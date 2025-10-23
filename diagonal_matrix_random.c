#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrix[5][5];
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1;
            }
            else if (j > i)
            {
                do
                {
                    matrix[i][j] = 1 + rand() % 50;
                } while (matrix[i][j] % 2 == 0);
            }
            else
            {
                do
                {
                    matrix[i][j] = 1 + rand() % 50;
                } while (matrix[i][j] % 2 != 0);
            }
        }
    }

    // Print matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
