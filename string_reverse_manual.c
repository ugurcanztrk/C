#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int len = strlen(word);
    printf("Reversed word: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}
