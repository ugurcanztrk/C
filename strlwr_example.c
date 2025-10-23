#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];

    printf("Enter a word: ");
    scanf("%s", text);

    strlwr(text);

    printf("Lowercase string: %s\n", text);

    return 0;
}
