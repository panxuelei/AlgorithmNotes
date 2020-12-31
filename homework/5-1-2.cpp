/*
求1+2+3+...+100，要求用do...while语句实现
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1, sum = 0;
    do
    {
        sum += n;
        n++;
    } while (n <= 100);
    printf("%d\n", sum);

    return 0;
}