#include <stdio.h>

int main()
{
    double score[] = {1, 2, 3, 4, 5};
    //数组的首地址 0x7fff52362ae0, 数组元素第一个元素的地址 0x7fff52362ae0 (数组的地址默认就是数组第一个元素的地址)
    printf("数组的首地址 %p, 数组元素第一个元素的地址 %p\n", score, &score[0]);

    double * ptr_score = score;
    for (int i = 0; i < 5; ++i) {
        printf("%.2lf\n", ptr_score[i]);
    }
    printf("***********************\n");
    for (int i = 0; i < 5; ++i) {
        printf("%.2lf\n", *(ptr_score + i));
    }
    printf("***********************\n");
    for (int i = 0; i < 5; ++i) {
        printf("%.2lf\n", *ptr_score++);
    }
    return 0;
}