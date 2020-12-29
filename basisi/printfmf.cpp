//%.mf，保留m位小数
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double d1=12.3456;
    printf("%.0f\n", d1);
    printf("%.1f\n", d1);
    printf("%.4f\n", d1);
    printf("%.6f\n", d1);

    return 0;
}