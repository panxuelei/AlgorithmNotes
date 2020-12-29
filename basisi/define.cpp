/*
符号常量就是“替换”，又称宏定义或者宏替换
＃define 标识符 常量
！！！末尾没有分号！！！
*/

#include <stdio.h>
#define pi 3.14

int main(int argc, char const *argv[])
{
    double r = 3;
    printf("%f\n", pi * r * r);

    return 0;
}