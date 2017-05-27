#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define  NUM = 10
int * getRan();

int r[10];

int main()
{
    int *p;
    int i;
    p = getRan();
    for (i = 0; i < 10; ++i) {
        printf( "*(p + %d) : %d -> %d\n", i, *(p + i), *p);
    }

    return 0;
}

int * getRan()
{
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10 ; ++i) {
        r[i] = rand();
    }

    return r;
}