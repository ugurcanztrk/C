#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5][5] = {{0, 1, 2, 3, 4}, {4, 5, 6, 7, 6}, {8, 4, 5, 0, 5}, {6, 0, 2, 1, 8}, {5, 6, 1, 2, 2}};
    char labels[5][5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int n = arr[i][j];
            int prime = (n >= 2);
            for (int k = 2; k < n; k++)
                if (n % k == 0)
                    prime = 0;

            strcpy(labels[i][j], prime ? "A+" : "A-");
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%s ", labels[i][j]);
        printf("\n");
    }

    return 0;
}
