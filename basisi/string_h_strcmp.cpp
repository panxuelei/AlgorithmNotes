#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    int cmp = strcmp(str1, str2);
    if (cmp < 0)
        printf("str1 < str2\n");
    else if (cmp > 0)
        printf("str1 > str2\n");
    else
        printf("str1 == str2\n");

    return 0;
}