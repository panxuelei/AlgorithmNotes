/*
求1+2+3+...+100，要求用while语句实现
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 100, sum = 0;
    while (count > 0)
    {
        sum += count;
        count--;
    }
    printf("%d\n", sum);

    return 0;
}