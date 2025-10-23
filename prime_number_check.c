#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            isPrime = 0;

    if (isPrime)
        printf("Prime number.");
    else
        printf("Not a prime number.");

    return 0;
}
