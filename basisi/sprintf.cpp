#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 233;
    char str[100];
    sprintf(str, "%d", n);
    printf("%s\n", str);

    return 0;
}