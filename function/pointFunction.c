//
// Created by yuanyueshui on 2017/8/10.
//
#include <stdio.h>

int max(int, int);

int max(int x, int y)
{
    return x > y ? x : y;
}

int main(void)
{
    /* p 是函数指针 */
    int (*p)(int, int) = max;  // &可以省略
    int a = 1;
    int b = 2;
    int c = 3;
    /* 与直接调用函数等价，d = max(max(a, b), c) */
    int d = p(p(a, b), c);

    printf("%d", d);

    return 0;
}

