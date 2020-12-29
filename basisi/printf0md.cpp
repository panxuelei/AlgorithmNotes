//%0md，注意多了个0
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 123, b = 12345, c = 123456;
    //不足前面补0
    printf("%05d\n", a);
    printf("%05d\n", b);
    // 超过就原样输出
    printf("%05d\n", c);

    return 0;
}