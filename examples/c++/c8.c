#include <stdio.h>
int main()
{
    int x;
    int sum = 0;
    scanf("%d", &x);
    int t = x;
    while (x > 1)
    {
        x /= 2;
        sum++;
    }
    printf("%d是%d次方", t, sum);
    return 0;
}