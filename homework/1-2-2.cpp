/*
从键盘上输入两个整数，并输出这两个数的和，即你的任务是计算a+b。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a + b);

    return 0;
}