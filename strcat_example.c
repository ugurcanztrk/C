#include <stdio.h>
#include <string.h>

int main()
{
    char message1[30] = "Hello ";
    char message2[20] = "Ugurcan";

    strcat(message1, message2);

    printf("Concatenated message: %s\n", message1);

    return 0;
}
