#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[50];
    int len1, len2, index = 0, found = 0;

    printf("Enter a text: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = '\0'; // remove newline

    printf("Enter the word you want to search: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = '\0'; // remove newline

    len1 = strlen(text1);
    len2 = strlen(text2);

    for (int i = 0; i < len1; i++)
    {
        if (text1[i] == text2[index])
        {
            index++;
            if (index == len2)
            {
                found = 1;
                break;
            }
        }
        else
        {
            index = 0;
        }
    }

    if (found)
        printf("The word was found in the text.\n");
    else
        printf("The word was NOT found.\n");

    return 0;
}
