#include <stdio.h>
#include <string.h>

int main()
{
    char word[50], reversed[50];
    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);
    for (int i = 0; i < len; i++)
        reversed[i] = word[len - i - 1];
    reversed[len] = '\0';

    if (strcmp(word, reversed) == 0)
        printf("The word is a palindrome.\n");
    else
        printf("The word is NOT a palindrome.\n");

    return 0;
}
