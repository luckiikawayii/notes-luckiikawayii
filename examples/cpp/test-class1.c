#include <stdio.h>
main()
{
    int a = 7;
    float x = 2.5, y = 4.7, s;
    s = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%lf", s);
}
