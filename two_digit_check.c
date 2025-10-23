#include <stdio.h>

int main()
{
    int number, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digits++;
        number /= 10;
    }

    if (digits == 2)
        printf("Number has two digits.");
    else
        printf("Number does not have two digits.");

    return 0;
}
