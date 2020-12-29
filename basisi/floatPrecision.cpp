//float、double精度问题
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f1 = 8765.4;
    double d1 = 8765.4;
    printf("%f\n%f\n", f1 * f1, d1 * d1);

    return 0;
}