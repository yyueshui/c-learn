#include <stdio.h>

double getAvg(int *arr, int size);

int main()
{
    int balance[5] = {100, 2, 3,4, 6};
    double avg;
    avg = getAvg(balance, 5);
    printf("Average value is: %f\n", avg );

    return 0;
}

double getAvg(int *arr, int size)
{
    int j, sum = 0;

    for (j = 0; j < size; ++j) {
        sum += arr[j];
    }

    return (double) sum / size;
}
