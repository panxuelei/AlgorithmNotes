/*
将一个长度为10的整型数组中的值按逆序重新存放。
如：原来的顺序为1,2,3,4,5,6,7,8,9,0，
要求改为0,9,8,7,6,5,4,3,2,1
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10], temp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        temp = nums[i];
        nums[i] = nums[9 - i];
        nums[9 - i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}