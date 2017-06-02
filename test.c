#include <stdio.h>

double getAvg(int num[], int size);

int main()
{
    int num[5] = {5, 2, 1, 3, 4};

    double avg;

    avg = getAvg(num, 5);

    printf("平均值是： %f ", avg);

    return 0;
}

double getAvg(int num[], int size)
{
    int sum;
    for (int i = 0; i < size; ++i) {
        sum += num[i];
    }
    printf( "总和是： %d ", sum );

    return (double)( sum /  size);
//    double avg;
//    int sum;
//    int test = 20;
//    printf( "总和是： %f ", (double)test );
//    for (int i = 0; i < size; ++i) {
//        sum += num[i];
//    }
//    printf( "总和是： %f ", (double)sum );
//    avg =  ((double)sum / size);
//
//    return avg;
}