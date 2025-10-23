#include <stdio.h>
#include <string.h>

int main()
{
    char answer[30];
    char correct[30] = "MustafaKemal";

    printf("Who is the founder of Turkey? ");
    scanf("%s", answer);

    if (strcmp(correct, answer) == 0)
        printf("Correct answer!\n");
    else
        printf("Wrong answer.\n");

    return 0;
}
