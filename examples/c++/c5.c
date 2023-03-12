#include <stdio.h>
int main()
{
    const int minor = 35;
    int age = 0;
    printf("输入你的年龄: ");
    scanf("%d", &age);
    printf("你的年龄是%d\n", age);
    if (age < minor)
    {
        printf("青春须把握");
    }
    else
        printf("年龄决定了你的精神世界");
    return 0;
}