#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name \"%s\" has %d characters.\n", name, strlen(name));

    return 0;
}
