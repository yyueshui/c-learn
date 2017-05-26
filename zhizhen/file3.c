#include <stdio.h>

const int MAX = 4;

int main ()
{
    char *names[] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };
    int  var[] = {10, 100, 200};
    int i = 0;

    for ( i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i] );
        printf("Value of var[%d] = %d\n", i, var[i] );
    }
    return 0;
}