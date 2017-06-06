#include <stdio.h>

int main()
{
    int num1 = 1024, num2 = 2048;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);
    /**
     * output
     * num1的值是1024  num1的地址是0x7fff15ec74ec
     * num2的值是2048  num2的地址是0x7fff15ec74e8
     */

    // 直接操作指针
    ptr2 = ptr1; //把指针ptr1 复制给ptr2 此时 ptr2 = ptr1 = 0x7fff15ec74ec; 此操作修改指针地址，不会影响num2
    printf("重新复制后:\n");
    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);
    /**
     * 重新复制后:
     * num1的值是1024  num1的地址是0x7fff15ec74ec
     * num2的值是2048  num2的地址是0x7fff15ec74ec
     */

    *ptr2 = 1111;
    printf("重新复制后:\n");
    printf("num1的值是%d\tnum1的地址是%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是%p\n", num2, ptr2);
    /**
     * 重新复制后:
     * num1的值是1111  num1的地址是0x7fff15ec74ec
     * num2的值是2048  num2的地址是0x7fff15ec74ec
     */

    return 0;
}