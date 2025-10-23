#include <stdio.h>

int main()
{
    int arr[] = {15, 20, 25, 21, 13};
    int *ptr = arr;

    printf("Array in reverse order:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
