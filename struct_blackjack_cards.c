#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Nested struct example - card game simulation
struct Cards
{
    char suits[4][20];
    char values[13][20];
};

int main()
{
    struct Cards blackjack = {
        {"Spade", "Diamond", "Club", "Heart"},
        {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
         "Eight", "Nine", "Ten", "Jack", "Queen", "King"}};

    char deck_suit[52][20];
    char deck_value[52][20];
    int drawn[52];
    int index = 0;
    srand(time(NULL));

    for (int i = 0; i < 52; i++)
        drawn[i] = -1;

    while (index < 52)
    {
        int s = rand() % 4;
        int v = rand() % 13;
        int unique = s * 13 + v;
        int isUnique = 1;

        for (int j = 0; j < index; j++)
        {
            if (drawn[j] == unique)
            {
                isUnique = 0;
                break;
            }
        }

        if (isUnique)
        {
            drawn[index] = unique;
            strcpy(deck_suit[index], blackjack.suits[s]);
            strcpy(deck_value[index], blackjack.values[v]);
            index++;
        }
    }

    printf("Randomly generated deck:\n\n");
    for (int k = 0; k < 52; k++)
    {
        printf("%s %s\t", deck_suit[k], deck_value[k]);
        if (k % 4 == 3)
            printf("\n");
    }

    return 0;
}
