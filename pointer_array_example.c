#include <stdio.h>

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: value = %d, address = %p\n", i + 1, *(ptr + i), (ptr + i));
    }

    return 0;
}
