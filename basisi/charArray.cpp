#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[15] = {'G', 'o', 'o', 'd', ' ', 's', 't', 'o', 'r', 'y', '!'};
    for (int i = 0; i < 11; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    char str2[15] = "Good Story!";
    for (int i = 0; i < 11; i++)
    {
        printf("%c", str2[i]);
    }

    return 0;
}