#include <stdio.h>

int main ()
{
    int *p = 0;
    int a ;
    p = &a;
    printf ("输入一个数字\n");
    scanf ("%d",p);
    printf("%d\n",*p);
}