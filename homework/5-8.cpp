/*
输入一个正整数n，求Fibonacci数列的第n个数。
Fibonacci数列的特点：第1,2个数为1,1。
从第3个数开始，概述是前面两个数之和。
要求输入的正整数n不超过50.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,a=1,b=1,c=a+b;
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        c = 1;
    }
    else
    {
        for (int i = 3; i <=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("%d\n", c);

    return 0;
}