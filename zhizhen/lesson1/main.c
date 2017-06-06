#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 9;
    int * prt_number = &number;
    //int * prt_number2 = &prt_number;
    //%p 指针占位符（大写）， %x 16进制占位符（小写）
    printf("number变量的地址是 %p %x\n", prt_number, &number);
    //printf("number变量的地址是 %p\n", prt_number2);

    return 0;
}