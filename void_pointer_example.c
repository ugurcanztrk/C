#include <stdio.h>

int main()
{
    int x = 10;
    float y = 3.14;
    char z = 'A';
    void *ptr;

    ptr = &x;
    printf("x = %d\n", *(int *)ptr);

    ptr = &y;
    printf("y = %.2f\n", *(float *)ptr);

    ptr = &z;
    printf("z = %c\n", *(char *)ptr);

    return 0;
}
