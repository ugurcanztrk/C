#include <stdio.h>

int main()
{
    int rows, cols, prime_count = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element for row %d column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count prime numbers in the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int value = matrix[i][j];
            int is_prime = 1;
            if (value < 2)
                is_prime = 0;
            for (int k = 2; k < value; k++)
            {
                if (value % k == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime)
                prime_count++;
        }
    }

    printf("Number of prime elements: %d\n", prime_count);
    return 0;
}
