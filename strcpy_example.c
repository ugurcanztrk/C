#include <stdio.h>
#include <string.h>

int main()
{
    char source[20] = "Ugurcan";
    char destination[20];

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
