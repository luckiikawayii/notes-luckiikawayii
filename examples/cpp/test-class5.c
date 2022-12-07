#include <stdio.h> //头文件

int main() // 主函数
{
    void sort(int x[], int n); // 函数声明

    int i, *p, a[4];         // 定义整型变量、指针变量、数组
    p = a;                   // 读者需要注意这里a赋值
    printf("请输入4个数："); // 提示语句
    for (i = 0; i < 4; i++)  // 输入4个数
    {
        scanf("%d,", p++); // 注意每个数之间用英文逗号隔开
    }

    p = a; // 读者需要注意这里a赋值
    sort(a, 4);
    // 调用sort排序
    printf("由大到小排序后的：");  // 提示语句
    for (p = a, i = 0; i < 4; i++) // 输出排序后的数
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n"); // 换行
    return 0;     // 主函数返回值为0
}

void sort(int x[], int n) // 自定义排序函数
{
    int i, j, k, t;         // 定义整型变量
    for (i = 0; i < 3; i++) // 外层for循环
    {
        k = i;                      // 把i的值赋给k
        for (j = 1 + i; j < 4; j++) // 内层for循环
        {
            if (x[j] > x[k]) // 如果前一个数大
            {
                k = j;
            }
        }
        t = x[k]; // 赋值
        x[k] = x[i];
        x[i] = t;
    }
}
