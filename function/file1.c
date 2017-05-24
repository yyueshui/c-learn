#include <stdio.h>

static void delete_string(char str[], char ch);
static int array_length(char str[]);

int main()
{
    extern void enter(char str[]); // 对函数的声明
    extern void print(char str[]); // 对函数的声明

    char c, str[100];
    int length;

    enter(str);
    length = array_length(str);
    printf("%d \n", length);

    scanf("%c", &c);
    delete_string(str, c);
    print(str);

    return 0;
}

static void delete_string(char str[], char ch)
{
    int i, j;

    for(i = j = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            str[j++] = str[i];
        }
        str[j] = '\0';
    }
}

static int array_length(char* str)
{
    int length;
    length = sizeof(str) / sizeof(str[0]);

    return  length;
}