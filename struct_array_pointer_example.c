#include <stdio.h>

struct Friend
{
    char name[25];
    char hometown[30];
    int age;
};

int main()
{
    struct Friend friends[3] = {
        {"Ahmet", "Bursa", 14},
        {"Mehmet", "Erzurum", 41},
        {"Ceyhun", "Canakkale", 23}};

    printf("Accessing struct array directly:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s - %s - %d\n", friends[i].name, friends[i].hometown, friends[i].age);
    }

    printf("\nAccessing struct array with pointer:\n");
    struct Friend *ptr = friends;
    for (int j = 0; j < 3; j++)
    {
        printf("%s - %s - %d\n", (ptr + j)->name, (ptr + j)->hometown, (ptr + j)->age);
    }

    return 0;
}
