#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], ch;
    int count = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ch)
            count++;
    }

    printf("Character '%c' appears %d times.\n", ch, count);
    return 0;
}
