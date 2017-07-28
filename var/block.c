#include <stdio.h>

int main()
{
    /**
     * 变量的作用域跟生存周期
     *  1、变量只存在于定义他们的语句块中
     *  2、变量在一个块内声明时被创建，在这个语句块结束时被销毁（自动变量）
     *  3、变量存在的时间成为变量的生存期
     */
    /*
    int num = 9;
    //代码块 - 域
    {
        int num = 99;
    }
    printf("%d\n", num); //9 */

    //作用域测试
    int count = 0;
    do{
//        int count = 0;
        count ++;
        printf("%d\n", count); //五次1
    } while (count < 5);
    printf("%d\n", count); //5
    return 0;
}