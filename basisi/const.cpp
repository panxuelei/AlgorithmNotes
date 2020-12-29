//另一种定义常量的方法是const
#include <stdio.h>
//！！！末尾有分号！！！
const double pi = 3.14;

int main(int argc, char const *argv[])
{
    double r = 3;
    printf("%f\n", 2 * pi * r);

    return 0;
}