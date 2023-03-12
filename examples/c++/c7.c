#include <stdio.h>
int main()
{
    int a, b, c, d;
    int score;
    scanf("%d", &score);
    printf("输入你的成绩：");
    score /= 10;
    switch (score)
    {
    case 10:
    case 9:
        printf("a\n");
        break;
    case 8:
        printf("b\n");
        break;
    case 7:
        printf("c\n");
        break;
    default:
        break;
    }
}