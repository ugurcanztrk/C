#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;
    int maxDigit = originalNumber % 10;
    int minDigit = originalNumber % 10;
    int digit;

    while (originalNumber > 0)
    {
        digit = originalNumber % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        if (digit < minDigit)
            minDigit = digit;
        originalNumber /= 10;
    }

    printf("Sum of largest and smallest digits: %d\n", maxDigit + minDigit);

    return 0;
}
