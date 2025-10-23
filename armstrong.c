#include <stdio.h>
#include <math.h>

int main()
{
    int number, digitCount = 0, originalNumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;

    // Count the number of digits
    for (int i = 1; number >= i; i *= 10)
    {
        digitCount++;
    }

    int sum = 0, digit;
    number = originalNumber;
    while (number > 0)
    {
        digit = number % 10;
        sum += pow(digit, digitCount);
        number /= 10;
    }

    if (sum == originalNumber)
        printf("%d is an Armstrong number.\n", originalNumber);
    else
        printf("%d is NOT an Armstrong number.\n", originalNumber);

    return 0;
}
