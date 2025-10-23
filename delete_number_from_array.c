#include <stdio.h>

int main()
{
    int array[10] = {5, 6, 9, 8, 4, 1, 5, 3, 4, 25};
    int size = 10;
    int number;

    printf("Enter number to delete: ");
    scanf("%d", &number);

    // Delete all occurrences of number
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            for (int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            size--;
            i--; // Check current index again after shifting
        }
    }

    // Print updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
