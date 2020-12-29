//scanf的结束标志
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[10];
    scanf("%s", str); //注意只有这里没有&
    printf("%s", str);

    return 0;
}