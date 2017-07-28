#include <stdio.h>
#include <stdlib.h>

int nums[5];
int * changeNum()
{
    nums[5] = {1, 2, 3, 4, 5};


    return nums;
}

int main()
{
    int  *ptrNums = changeNum();
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(ptrNums + i));
    }

    return 0;
}