#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a, *q = &a[9];
//    printf("%d", p);
//    printf("%d", q);

    int i, num;
    while (p <= q) {
        num = *q;
        *q = *p;
        *p = num;
        p++;
        q--;
    }
    printf("新数组:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d  ", a[j]);

    }

    printf("\n");
    return 0;
}