#include <stdio.h>

int array_sum(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int result = array_sum(A, size);

    printf("Sum of array elements: %d\n", result);
    return 0;
}
