//getchar()你输入abcd，它会自动按字符分开接受

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c1, c2, c3;
    c1 = getchar();
    getchar(); //getchar放到程序最后，起到暂停程序的作用
    c2 = getchar();
    c3 = getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);

    return 0;
}