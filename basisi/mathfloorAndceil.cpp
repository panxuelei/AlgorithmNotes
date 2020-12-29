//向下取整和向上取整
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double db1 = -5.2, db2 = 5.2;
    printf("%.0f %.0f\n", floor(db1), ceil(db1));
    printf("%.0f %.0f\n", floor(db2), ceil(db2));

    return 0;
}