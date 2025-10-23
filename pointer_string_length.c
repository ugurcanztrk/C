#include <stdio.h>

int main()
{
    char text[100];
    char *ptr = text;
    int count = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    while (*(ptr + count) != '\0')
        count++;

    printf("String length (by pointer): %d\n", count - 1);
    return 0;
}
