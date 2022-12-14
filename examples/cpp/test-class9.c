#include <stdio.h>
int strcmp(char s[], char a[])
{
    int i = 0, j = 0;
    while (s[i++] && a[j++] && s[i] == a[j])
        ;
    return s[i] - a[j];
}

int main()
{
    int x;
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    x = strcmp(s1, s2);
    printf("%d\n", x);
    return 0;
}
