#include <stdio.h>

int main()
{
    int num[2];

//    scanf("%d", (num + 1));
//    printf("%d", *(num + 1));
//    printf("%p", num);
    int test, test1;
    int * ptr = &test;
    scanf("%d", ptr);
    scanf("%d", &test1);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", test);
    printf("%d\n", test1);

    return 0;
}