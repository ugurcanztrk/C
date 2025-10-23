#include <stdio.h>

int main()
{
    int arr[20] = {2, 5, 3, 6, 4, 2, 7, 4, 6, 3, 1, 4, 2, 5, 7, 5, 3, 4, 2, 6};

    for (int i = 1; i < 19; i++)
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            printf("%d ", arr[i]);

    return 0;
}
