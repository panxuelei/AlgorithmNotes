#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    strcpy(str1, str2);
    puts(str1);

    return 0;
}