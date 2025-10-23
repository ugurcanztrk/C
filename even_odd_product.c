#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;
    int oddSum = 0, evenSum = 0, digit;

    while (originalNumber > 0)
    {
        digit = originalNumber % 10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        originalNumber /= 10;
    }

    printf("Product of sum of odd and even digits: %d\n", oddSum * evenSum);

    return 0;
}
