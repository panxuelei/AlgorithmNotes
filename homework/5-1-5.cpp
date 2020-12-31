/*
编程实现求1+2+3+...和的程序，
要求得到使使和数大于1000的最小正整数。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int max = 1000, sum = 0, n;
    for (n = 1; sum <= max; n++)
    {
        sum += n;
    }
    printf("%d\n", --n);

    return 0;
}
