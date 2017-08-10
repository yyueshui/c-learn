#include <stdio.h>
#include <stdarg.h> //可变参数头文件

void change(int *num);
//可变参数函数
double avg(int num, ...);

int main()
{
    int num = 9;
    change(&num);
    printf("%d\n", num);

    printf("%.2lf", avg(4, 2,3,4,5));
    return 0;
}

void change(int *num)
{
    (*num)++;
}

double avg(int num, ...)
{
    va_list vaList;
    double sum = 0.0;
    /* 为 num 个参数初始化 valist */
    va_start(vaList, num);
    /* 访问所有赋给 valist 的参数 */
    for (int i = 0; i < num; ++i) {
        sum += va_arg(vaList, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(vaList);

    return sum/num;
}