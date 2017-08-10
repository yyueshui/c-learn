//
// Created by yuanyueshui on 2017/8/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void populateArray(int *array, size_t arraySize, int (*getNextValue)())
{
    for (size_t i = 0; i < arraySize; ++i) {
        *(array + i) = getNextValue();
    }
}

int getNextRandomValue()
{
//    srand(time(NULL));
    return rand();
}

int main(void)
{
    int myArray[10];
    populateArray(myArray, 10, getNextRandomValue);

    for(int i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}