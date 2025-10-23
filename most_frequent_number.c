#include <stdio.h>

int main()
{
    int arr[16] = {3, 3, 3, 4, 4, 4, 4, 4, 2, 2, 6, 6, 6, 6, 6, 8};
    int maxCount = 0, most = arr[0];

    for (int i = 0; i < 16; i++)
    {
        int count = 0;
        for (int j = 0; j < 16; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > maxCount)
        {
            maxCount = count;
            most = arr[i];
        }
    }

    printf("Most frequent number: %d (appears %d times)\n", most, maxCount);
    return 0;
}
