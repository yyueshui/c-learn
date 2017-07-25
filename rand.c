#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
//    int rand = rand();

    printf("%d", rand(5, 15));

    return 0;
}