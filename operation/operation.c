#include <stdio.h>

int main() {

    unsigned int a = 60;    /* 60 = 0011 1100 */
    unsigned int b = 13;    /* 13 = 0000 1101 */
    int c = 0;

    c = a & b;       /* 12 = 0000 1100 */
    printf("Line 1 - c 的值是 %d\n", c);

    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - c 的值是 %d\n", c);

    c = a ^ b;       /*取反 49 = 0011 0001 */
    printf("Line 3 - c 的值是 %d\n", c);

    c = ~a;          /*取反 -61 = 1100 0011 */
    printf("Line 4 - c 的值是 %d\n", c);

    c = a << 2;     /* 左移两位  240 = 1111 0000 */
    printf("Line 5 - c 的值是 %d\n", c);

    c = a >> 2;     /* 右移两位 15 = 0000 1111 */
    printf("Line 6 - c 的值是 %d\n", c);
    return 0;
}
