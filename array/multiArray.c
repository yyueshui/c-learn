#include <stdio.h>
double getAvg(int num[], int size);

int main() {
    int a[6][2] = {
            {0, 0},
            {1, 2},
            {2, 4},
            {3, 6},
            {4, 8},
            {5, 10},
    };

    int i, k;

    for (i = 0; i < 5; ++i) {
        for (int k = 0; k < 2; ++k) {
            printf("a[%d][%d] = %d\n", i, k, a[i][k]);
        }
    }

    return 0;
}

double getAvg(int num[], int size)
{
    double avg;
    double sum;

    for (int i = 0; i < size; ++i) {
        sum += num[i];
    }
    printf( "是： %f ", sum );
    avg =  sum / size;

    return avg;
}
