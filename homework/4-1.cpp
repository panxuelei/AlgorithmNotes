/*
求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，但不保证b2-4ac>0。

程序中所涉及的变量均为double类型。
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    double r1, r2;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (pow(b, 2) - 4 * a * c >= 0)
    {
        r1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
        r2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
        printf("r1=%7.2f\n", r1);
        printf("r2=%7.2f", r2);
    }
    else
    {
        printf("No real roots!");
    }

    return 0;
}