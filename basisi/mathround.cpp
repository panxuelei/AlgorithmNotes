/*round四舍五入，返回double，
但是只对小数点后第一位四舍五入，相当于只有整数部分
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a = round(1.234);
    double b = round(1.499);
    double c = round(1.534);
    printf("%f, %f, %f\n", a, b, c); 
    printf("%d, %d, %d\n", (int)a, (int)b, (int)c); 

    return 0;
}