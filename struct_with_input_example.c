#include <stdio.h>
#include <string.h>

struct Identity
{
    char name[30];
    char surname[30];
    char department[50];
    int number;
};

int main()
{
    struct Identity person;

    printf("Enter your name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0';

    printf("Enter your surname: ");
    fgets(person.surname, sizeof(person.surname), stdin);
    person.surname[strcspn(person.surname, "\n")] = '\0';

    printf("Enter your department: ");
    fgets(person.department, sizeof(person.department), stdin);
    person.department[strcspn(person.department, "\n")] = '\0';

    printf("Enter your number: ");
    scanf("%d", &person.number);

    printf("\n--- Identity Info ---\n");
    printf("Name: %s %s\n", person.name, person.surname);
    printf("Department: %s\n", person.department);
    printf("Number: %d\n", person.number);

    return 0;
}
