//scanf hh:mm:ss 格式
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hh, mm, ss;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    printf("%d:%d:%d", hh, mm, ss);

    return 0;
}