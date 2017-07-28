#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 4, 5, 7};
    printf("%ld", sizeof(nums) / sizeof(nums[0]));

    return 0;
}