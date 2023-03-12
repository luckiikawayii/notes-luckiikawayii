#include <stdio.h>
int main()
{
    int a, b, c, x, s;
    printf("sr");
    scanf("%d", &x);
    a = x / 100;
    b = (x - a * 100) / 10;
    c = x % 10;
    s = c * 100 + b * 10 + a;
    printf("s=%d\n", s);
    return 0;
}