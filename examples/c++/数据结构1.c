#include <stdio.h>
int main(int n, int s)
{
    printf("输入一个数字n:");
    scanf("%n", &n);
    if (n <= 0)
    {

        return 0;
    }
    else
    {

        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            x += i;
        }
        printf("%d", x);
        return 1;
    }
}
