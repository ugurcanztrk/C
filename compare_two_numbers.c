#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
        printf("First number is greater.");
    else if (b > a)
        printf("Second number is greater.");
    else
        printf("Both numbers are equal.");

    return 0;
}
