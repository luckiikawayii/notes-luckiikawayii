//   区别不同有无小数点 用法
#include <stdio.h>
#include <math.h>
int main()
{
    double p0, p1, r;
    int y;
    p0 = 1234567890;
    p1 = 2025 - 2012;
    r = 0.005;
    p1 = p0 * pow(1 + r, y);
    printf("p1=%f\n", p1);
    return 0;
}