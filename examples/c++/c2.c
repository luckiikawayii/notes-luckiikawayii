#include <stdio.h>
int main()
{
    int sum, i;
    i = 2;
    sum = 1;
    for (i = 2; i <= 5; i++)
    {

        sum = sum * i;
    }
    printf("sum=%d\n", sum);
    return 0;
}
