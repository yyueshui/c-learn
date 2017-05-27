#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int newValue;
    int count = 5;
    scanf("%d", &newValue);
    numbers[count] = newValue;
    count++;

    for (int k = 0; k < count; ++k) {
        printf("新数组值%d \n", numbers[k]);
    }
    return 0;
}