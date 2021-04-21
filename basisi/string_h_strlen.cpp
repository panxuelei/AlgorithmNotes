#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[10];
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);

    return 0;
}