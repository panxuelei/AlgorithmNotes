#include <stdio.h>

int main(int argc, char const *argv[])
{
    double r = 12.56;
    int a = 3, b = 5;
    printf("(int)r = %d\n", (int)r);
    printf("a/b = %d\n", a / b);
    printf("%.1f", (double)a / (double)b);

    return 0;
}