#include <stdio.h>
int main()
{
    int a[4], i, j, t;
    printf(" Input ten numbers :\n ");
    for (i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 3; i++)
        for (j = 3; j > i; j--)
        {
            if (a[i] < a[j])
                t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    for (i = 0; i < 4; i++)
        printf("%5d", a[1]);
    return 0;
}