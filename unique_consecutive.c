#include <stdio.h>

int main()
{
    int array[20] = {9, 9, 3, 3, 3, 3, 3, 6, 5, 5, 0, 0, 0, 0, 0, 1, 1, 3, 3, 3};

    printf("Unique consecutive elements: ");
    printf("%d ", array[0]);

    for (int i = 1; i < 20; i++)
    {
        if (array[i] != array[i - 1])
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
