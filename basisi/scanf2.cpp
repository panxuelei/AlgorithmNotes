//scanf %c可以读入空格和换行
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    char c, str[10];
    scanf("%d%c%s", &a, &c, str);
    printf("a=%d, c=%c, str=%s", a, c, str);

    return 0;
}