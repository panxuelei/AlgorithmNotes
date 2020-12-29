/*
设置3个变量a, b, sum，其中a, b用来存放两个整数，
sum用来存放a, b两个数的和，
通过赋值（即采用赋值运算符"="）的方式将a初始化为123，
b初始化为456，并把两个变量相加的结果赋值给sum。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 123, b = 456, sum = a + b;
    printf("sum=%d", sum);

    return 0;
}