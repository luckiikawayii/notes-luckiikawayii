#include <stdio.h>
int main()
{
    int i, sum;
    sum = 1;
    i = 2;
    while (i < 5)
    {
        sum = sum * i;
        i = i+1;
    }
    printf("%d\n", sum);
    return 0;
}