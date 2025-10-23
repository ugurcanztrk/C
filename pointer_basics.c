#include <stdio.h>

int main()
{
    int number = 5;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Pointer value (address): %p\n", ptr);
    printf("Value through pointer: %d\n", *ptr);

    return 0;
}
