#include <stdio.h>

int main()
{
    int midterm, final;
    float total;

    printf("Enter midterm grade: ");
    scanf("%d", &midterm);
    printf("Enter final grade: ");
    scanf("%d", &final);

    total = midterm * 0.4 + final * 0.6;

    if (total > 90)
        printf("Your grade is AA.");
    else if (total > 80)
        printf("Your grade is BA.");
    else if (total > 70)
        printf("Your grade is BB.");
    else if (total > 60)
        printf("Your grade is CB.");
    else if (total > 50)
        printf("Your grade is CC.");
    else
        printf("You have failed.");

    return 0;
}
