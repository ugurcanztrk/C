#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];

    printf("Enter a word: ");
    scanf("%s", text);

    strrev(text);

    printf("Reversed string: %s\n", text);

    return 0;
}
