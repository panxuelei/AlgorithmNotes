#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a = asin(1);
    double b = acos(-1.0);
    double c = atan(0);
    printf("%f, %f, %f\n", a, b, c);

    return 0;
}