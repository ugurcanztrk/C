#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("1-Addition\n2-Subtraction\n3-Division\n4-Multiplication\nChoose: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result: %d", a + b);
        break;
    case 2:
        printf("Result: %d", a - b);
        break;
    case 3:
        printf("Result: %.2f", (float)a / b);
        break;
    case 4:
        printf("Result: %d", a * b);
        break;
    default:
        printf("Invalid choice.");
        break;
    }

    return 0;
}
