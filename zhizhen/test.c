#include <stdio.h>

int main()
{
    double score[] = {1, 2, 3, 4, 5};
    printf("%.2lf\n", score[1]);
    printf("%.2lf\n", *(score+1));
    printf("%p\n", score+1); //
    printf("%p\n", score);

    return 0;
}