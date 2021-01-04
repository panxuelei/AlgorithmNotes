/*
输出以下4*5的矩阵

  1  2  3  4  5

  2  4  6  8 10

  3  6  9 12 15

  4  8 12 16 20

要求使用循环实现，注意每行输出5个数字，每个数字占3个字符的宽度，右对齐。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (int i = 3; i <= 15; i += 3)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (int i = 4; i <= 20; i += 4)
    {
        printf("%3d", i);
    }

    return 0;
}