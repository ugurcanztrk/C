#include <stdio.h>

int power_recursive(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power_recursive(base, exp - 1);
}

int main()
{
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("%d^%d = %d\n", base, exp, power_recursive(base, exp));
    return 0;
}
