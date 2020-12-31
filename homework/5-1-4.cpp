/*
输入一个正整数N，求1+2+...+N，要求在程序中使用break语句。 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1, sum = 0, num;
    scanf("%d", &num);
    while (true)
    {
        sum += n;
        n++;
        if (n > num)
            break;
    }
    printf("%d\n", sum);

    return 0;
}