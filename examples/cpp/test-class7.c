#include <stdio.h>
int fun(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (fun(n))
        printf("%d是素数\n", n);
    else
        printf("%d不是素数\n", n);
    return 0;
}