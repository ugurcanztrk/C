#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *p = 10;
    printf("Value stored at allocated memory: %d\n", *p);

    free(p);
    return 0;
}
