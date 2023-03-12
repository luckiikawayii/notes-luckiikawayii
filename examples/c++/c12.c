// fn=1+1/2+1/3+1/4+1/n,求和
#include <stdio.h>
int main()
{
    int i, n;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("fn=%f\n", sum);
    return 0;
}