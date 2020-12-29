//%md 右对齐输出
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 123, b = 12345, c = 123456;
    //不足前面补空格
    printf("%5d\n", a);
    printf("%5d\n", b);
    // 超过就原样输出
    printf("%5d\n", c);

    return 0;
}