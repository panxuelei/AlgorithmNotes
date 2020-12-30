/*
从键盘输入3个实数a, b, c，通过比较交换，
将最小值存储在变量a中，最大值存储在变量c中，
中间值存储在变量b中，
并按照从小到大的顺序输出这三个数a, b, c。
末尾输出换行。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double a, b, c, max, min;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a <= b)
    {
        if (a <= c)
        {
            if (b <= c)
                ; //a<b<c
            else
            { //a<c<b
                max = b;
                b = c;
                c = max;
            }
        }
        else //b>a>c
        {
            //c<a<b
            max = b;
            min = c;
            b = a;
            a = min;
            c = max;
        }
    }
    else
    { //a>b
        if (a >= c)
        {
            if (b >= c)
            { //c<b<a
                max = a;
                min = c;
                a = min;
                c = max;
            }
            else
            { //b<c<a
                max = a;
                min = b;
                a = min;
                b = c;
                c = max;
            }
        }
        else
        { //c>a>b
            max = c;
            min = b;
            b = a;
            a = min;
            c = max;
        }
    }
    printf("%.2f %.2f %.2f\n", a, b, c);

    return 0;
}