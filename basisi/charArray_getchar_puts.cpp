/*
如果要用getchar输入字符串，需要在每个字符串后手动加入'\0'
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[15];
    for (int i = 0; i < 3; i++)
    {
        str[i] = getchar();
    }
    puts(str);

    return 0;
}