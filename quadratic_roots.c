#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2;

    printf("Enter a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    root1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("Roots: %.2f , %.2f", root1, root2);

    return 0;
}
