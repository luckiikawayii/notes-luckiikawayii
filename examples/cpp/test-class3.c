#include <stdio.h>
int main()
{
    int i, j, m, n;
    i = 8;
    j = 10;
    m = ++j;
    n = j++;
    printf("%d,%d,%d,%d", i, j, m, n);
    return 0;
}