#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int find_max_recursive(int *arr, int n)
{
    if (n == 1)
        return arr[0];

    int left_max = find_max_recursive(arr, n / 2);
    int right_max = find_max_recursive(arr + n / 2, n - n / 2);
    return max(left_max, right_max);
}

int main()
{
    int arr[] = {1, 9, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element in array: %d\n", find_max_recursive(arr, size));
    return 0;
}
