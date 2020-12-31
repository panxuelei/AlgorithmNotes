/*
求1+2+3+...+100，要求用for语句实现
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}