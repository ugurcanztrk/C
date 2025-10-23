#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5][5];
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else if (j > i)
            {
                do
                    arr[i][j] = rand() % 50 + 1;
                while (arr[i][j] % 2 == 0);
            }
            else
            {
                do
                    arr[i][j] = rand() % 50 + 1;
                while (arr[i][j] % 2 != 0);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
