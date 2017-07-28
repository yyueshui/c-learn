#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int * nums;
    int count = 5;
    //给前面的指针动态分配20个字节（5个整形）的空间
    //int nums[5]; 这语句跟下面的语句相等， 区别在于此处是静态分配内存，下面的malloc是动态分配内存
    //nums = (int *) malloc(20); 这语句跟下面语句相等，下面语句兼容性强
    /**
     * calloc 跟 malloc的作用基本一致，当时不需要强制转换类型
     */
    nums = (int *) malloc(sizeof(int) * count); //为指针分配空间后，指针就变成了数组
    //nums = calloc(count, sizeof(int)); //为指针分配空间后，指针就变成了数组， 第一个参数为第多少个元素， 第二个为单个元素占用的字节数， 并且该函数有初始值

    for(i = 0; i < count; i++) {
        printf("请输入第%d个元素: ", i + 1);
        scanf("%d", nums + i);
    }

    printf("数组元素为： ");
    for (int j = 0; j < count; ++j) {
        printf("%d\t", *(nums + j));
    }
    free(nums); //释放动态分配的内存 *一定要释放内存*
    nums = NULL;

    return 0;
}