#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("Positive number.");
    else
        printf("Negative number.");

    return 0;
}
