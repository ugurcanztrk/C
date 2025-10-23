#include <stdio.h>
#include <string.h>

struct Footballer
{
    char name[20];
    char team[30];
    int age;
};

int main()
{
    struct Footballer player;
    strcpy(player.name, "Icardi");
    strcpy(player.team, "Galatasaray");
    player.age = 36;

    printf("Footballer Info (Normal Access):\n");
    printf("%s\n%s\n%d\n\n", player.name, player.team, player.age);

    struct Footballer *ptr = &player;
    printf("Footballer Info (Pointer Access):\n");
    printf("%s\n%s\n%d\n", ptr->name, ptr->team, ptr->age);

    return 0;
}
