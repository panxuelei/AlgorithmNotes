/*
求圆周率PI的近似值，
直到发现某一项的绝对值小于10-6为止（该项不累加）。
要求输出的结果总宽度占10位，其中小数部分为8位。
程序中使用浮点型数据时，请定义为双精度double类型。
如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，
如求x的绝对值，则为fabs(x).
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double delta = 1e-6, sum = 0, i = 1, temp = 1, flag = 1;
    while (fabs(temp) >= delta)
    {
        sum += temp * flag;        
        i += 2;
        temp = 1 / i;
        flag = -flag;
    }
    printf("PI=%10.8f\n", 4 * sum);

    return 0;
}