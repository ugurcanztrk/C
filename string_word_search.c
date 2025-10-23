#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], word[50];
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter the word to search: ");
    scanf("%s", word);

    if (strstr(text, word))
        printf("The word '%s' was found in the text.\n", word);
    else
        printf("The word '%s' was NOT found.\n", word);

    return 0;
}
