// c语言求最大值
#include <stdio.h>
int main()
{
    int max(int age1, int age2);
    int age1, age2, age_max;
    scanf("%d,%d", &age1, &age2);
    age_max = max(age1, age2);
    printf("Max is %d\n", age_max);
    return 0;
}
int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}
