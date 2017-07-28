/**
 * MyCounter.c
 * 用户计算函数被调用多少次
 */

int counter();

int counter()
{
    static int count = 0; //第一次执行会分配空间， 以后调用就不会被分配空间了，本条语句只会被执行一次
    return ++count;
}