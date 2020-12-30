/*
从键盘输入2个实数，按照代数值由小到大的顺序输出这两个数。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    if (a <= b)
    {
        printf("%.2f ", a);
        printf("%.2f\n", b);
    }
    else
    {
        printf("%.2f ", b);
        printf("%.2f\n", a);
    }

    return 0;
}