#include <stdio.h>
int main()
{
    int a = 5, b = 7;
    float x = 67.8564, y = -789.124;
    char c = 'A';
    long n = 1234567;
    unsigned u = 65535;
    printf("%d%d\n", a, b);
    printf("%3d%3d\n", a, b);
    printf("%f,%f\n", x, y);
    printf("%-10f,%-10f\n", x, y);
    printf("%8.2f,%8.2f,%.4f,%3f,%3f\n", x, y, x, y, x, y);
    printf("%e,%10.2e\n", x, y);
    printf("%c,%d,%o,%x\n", c, c, c, c);
    printf("%1d,%1o,%x\n", n, n, n);
    printf("%u,%o,%x,%d\n", u, u, u, u);
    return 0;
}