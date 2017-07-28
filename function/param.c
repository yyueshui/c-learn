#include <stdio.h>

void change(int *num);

int main()
{
    int num = 9;
    change(&num);
    printf("%d", num);

    return 0;
}

void change(int *num)
{
    (*num)++;
}