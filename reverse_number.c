#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d", reversed);
    return 0;
}
