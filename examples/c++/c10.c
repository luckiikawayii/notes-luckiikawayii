#include <stdio.h>
int main()
{
    int n;
    for (n = 100; n <= 200; n++)
    {
        if (n % 3 != 0)
        {
            printf("%d能被3整除\n", n);
        }
    }
    return 0;
}