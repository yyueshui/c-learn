#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char * words = "Hello World"; //words表示字符串的首地址
    words += 9;
    puts(words);
    */
    char str1[] = "Hello World"; //str1++; 不能执行
    char * str2 = "Hello World";
    const char * str3 = "Hello";
    printf("字符串常量的地址%p\n", "Hello World");
    printf("字符串数组的地址%p\n", str1);
    printf("字符串指针的地址%p\n", str2);
    str2++;
    printf("%s\n", str2);
    str3 += 2;
    printf("%s", str3);

    return 0;
}