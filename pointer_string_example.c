#include <stdio.h>

int main()
{
    char city[] = "Istanbul";
    char *ptr = city;

    printf("Characters in '%s':\n", city);
    while (*ptr != '\0')
    {
        printf("%c at address %p\n", *ptr, ptr);
        ptr++;
    }

    return 0;
}
