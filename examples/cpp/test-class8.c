#include <stdio.h>
int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}}, b[3][2], i, j;
    printf("请输出a的元素：\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("请输出b的元素:\n");
    for (j = 0; j <= 2; j++)
    {
        for (i = 0; i <= 1; i++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
