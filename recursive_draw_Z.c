#include <stdio.h>

void draw_Z(int n, int total)
{
    if (n < 0)
        return;

    if (n == 0 || n == total - 1)
    {
        for (int i = 0; i < total; i++)
            printf("*");
    }
    else
    {
        for (int i = 1; i <= n; i++)
            printf(" ");
        printf("*");
    }

    printf("\n");
    draw_Z(n - 1, total);
}

int main()
{
    int size;
    printf("Enter size for letter Z: ");
    scanf("%d", &size);
    draw_Z(size - 1, size);
    return 0;
}
