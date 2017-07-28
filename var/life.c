#include <stdio.h>
#include <stdlib.h>

//1、计算函数被调用多少次
int counter();
int main()
{
    int count = 0;
    counter();
    counter();
    counter();
    count = counter();

    printf("%d", count);

    return 0;
}



int counter()
{
    static int count = 0; //第一次执行会分配空间， 以后调用就不会被分配空间了，本条语句只会被执行一次
    return ++count;
}