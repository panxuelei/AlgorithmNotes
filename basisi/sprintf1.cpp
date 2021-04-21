#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 12;
    double db = 3.1415;
    char str[100], str2[100] = "good";
    sprintf(str, "%d:%.2f,%s", n, db, str2);
    printf("str = %s\n", str);

    return 0;
}