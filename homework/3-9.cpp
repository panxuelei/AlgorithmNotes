/*
从键盘输入三个字符BOY，然后把他们输出到屏幕上
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    printf("%c%c%c", a, b, c);

    return 0;
}