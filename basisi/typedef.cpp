//typedef 起别名，后面有分号！！
#include <stdio.h>
typedef long long LL;

int main(int argc, char const *argv[])
{
    LL a = 123456789012345, b = 234567890123456;
    printf("%lld\n", a + b);

    return 0;
}