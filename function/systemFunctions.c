#include <stdio.h>

#include <math.h>
int main()
{
    double num = 10.01;
    printf("floor: %.2lf\n", floor(num)); //去尾法
    printf("ceil: %.2lf\n", ceil(num)); //进一法
    system("ls"); //windows
    return 0;
}