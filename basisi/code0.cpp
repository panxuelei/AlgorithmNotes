//一个简单的输入输出程序

#include <stdio.h>

int main()
{
    int a, b;
    printf("请输入两个数：");
    scanf("%d%d", &a, &b);
    printf("%d", a + b);

    return 0;
}