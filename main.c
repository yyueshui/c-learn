#include <stdio.h>

double getAvg(int num[], int size);

int main()
{
    int num[5] = {5, 2, 1, 3, 4};

    double avg, avg2, avg3;

    avg = getAvg(num, 5);
    avg2 = getAvg2(num, 5);
    avg3 = getAvg3(num, 5);

    printf("平均值是： %f ", avg);

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