#include <stdio.h>

int main()
{
    int arr[20] = {9, 9, 3, 3, 3, 3, 3, 6, 5, 5, 0, 0, 0, 0, 0, 1, 1, 3, 3, 11};
    int largest = arr[0], second = arr[0];

    for (int i = 1; i < 20; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("Largest: %d, Second Largest: %d\n", largest, second);
    return 0;
}
