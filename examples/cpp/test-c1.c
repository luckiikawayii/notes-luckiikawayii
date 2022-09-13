#include <stdio.h>

int main()
{
    int load = 1 + 1;
    char buffer[100];

    sprintf(buffer, "%d", load);

    printf("buffer in int = %s\n", buffer);
    printf("hello!\n");

    return 0;
}
