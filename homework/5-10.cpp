/*
有如下分数序列
求出次数列的前20项之和。
请将结果的数据类型定义为double类型。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double sum = 2, a = 1, b = 2, c = a + b, temp;
    for (int i = 2; i <= 20; i++)
    {
        sum += (a + b) / b;
        temp = a;
        a = b;
        b += temp;
    }
    printf("%.6f\n", sum);

    return 0;
}