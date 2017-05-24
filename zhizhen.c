#include <stdio.h>

int main()
{
    int num = 0;
    char *str = "How do you do";
    for(; *str; str++) {
        if(*str == 'o') {
            num ++;
        }
    }

    printf("o 出现 %d 次", num);

    return 0;
}