/*
按要求输入如下格式的杨辉三角

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

最多输出10层
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[10][10];
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}