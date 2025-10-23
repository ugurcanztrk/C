#include <stdio.h>

int main()
{
    int arr[10] = {3, 5, 2, 4, 1, 2, 5, 3, 1, 2};

    for (int i = 0; i < 10; i++)
    {
        int left = 0, right = 0;
        for (int j = 0; j <= i; j++)
            left += arr[j];
        for (int j = i + 1; j < 10; j++)
            right += arr[j];
        if (left == right)
        {
            printf("Balance point found at index %d (value %d)\n", i, arr[i]);
            return 0;
        }
    }

    printf("No balance point found.\n");
    return 0;
}
