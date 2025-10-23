#include <stdio.h>

int main()
{
    int array[20] = {2, 5, 3, 6, 4, 2, 7, 4, 6, 3, 1, 4, 2, 5, 7, 5, 3, 4, 2, 6};
    int last1 = 0, last2 = 0, last3 = 0;

    for (int i = 0; i < 20; i++)
    {
        last1 = last2;
        last2 = last3;
        last3 = array[i];

        if (i >= 2)
        {
            int max = last1;
            if (last2 > max)
                max = last2;
            if (last3 > max)
                max = last3;
            printf("%d ", max);
        }
    }
    printf("\n");
    return 0;
}
