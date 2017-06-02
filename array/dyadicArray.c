#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    double  scores[4][3] = {
            {98, 67, 88},
            {58, 90, 22},
            {44, 79, 100},
            {33, 83, 98},
    };

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%.2lf \t", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}