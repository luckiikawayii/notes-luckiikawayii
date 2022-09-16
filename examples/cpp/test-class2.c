
#include <stdio.h>
main()
{
    int a = 2, b = 3;
    float x = 3.5, y = 2.5, s;
    s = (float)(a + b) / 2 + (int)x % (int)y;
    printf("%f", s);
}
