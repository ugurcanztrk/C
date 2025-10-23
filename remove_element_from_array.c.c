#include <stdio.h>

int main()
{
    int arr[10] = {5, 6, 9, 8, 4, 5, 5, 3, 10, 25};
    int n = 10, val;
    printf("Enter the number to remove: ");
    scanf("%d", &val);

    for (int i = 0; i < n;)
    {
        if (arr[i] == val)
        {
            for (int j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            n--;
        }
        else
            i++;
    }

    printf("Array after removal: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
