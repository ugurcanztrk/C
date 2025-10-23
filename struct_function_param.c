#include <stdio.h>
#include <string.h>

struct Person
{
    char name[25];
    char surname[25];
    int password;
};

struct Date
{
    char date[20];
};

void printPerson(struct Person p)
{
    printf("%s %s - %d\n", p.name, p.surname, p.password);
}

void printPersonWithDate(struct Person p, struct Date d)
{
    printf("%s %s - %d - %s\n", p.name, p.surname, p.password, d.date);
}

int main()
{
    struct Person person = {"Ugurcan", "Ozturk", 3761};
    struct Date birth = {"27.04.2004"};

    printPerson(person);
    printPersonWithDate(person, birth);

    return 0;
}
