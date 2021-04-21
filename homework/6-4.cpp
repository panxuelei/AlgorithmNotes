/*
有一个已排好序的数组，要求输入一个数后，
按原来排序的规律将它插入到数组中。
假设数组长度为10，数组中前9个数
（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）
已经按从小到大进行排序。
然后再从键盘上输入一个整数，
将此整数插入到前有序的9个数中，
使得最终的10个数依然是从小到大有序的。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10], num;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > num)
        {
            for (int k = 9; k > i; k--)
            {
                nums[k] = nums[k - 1];
            }
            nums[i] = num;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}