//
// Created by yuanyueshui on 2017/7/31.
//
#include <stdio.h>
#include <string.h>
int getStringLength(char str[]);

//封装fgets，用来接收输入的字符串
void getString(char str[], int count);

int main()
{
    //定义字符串的几种方式
    //字符串跟字符数组的区别： 最后一位是否是空字符
    char name1[30];
    char name2[10] = "jack";
    getString(name1, 10);
//    fgets(name2, 10, stdin); //默认会给字符加上回车 \n
//    printf("数组names2中的内容\n");
//    for (int i = 0; i < 30; ++i) {
//        printf("%c\n", *(name2 + i));
//    }
    int length = getStringLength(name1);
    printf("%d\n", length);

    return 0;
}

int getStringLength(char str[])
{
    int count = 0;

    while (*(str + count) != '\0') {
        //fgets判断
        if(*(str + count) == '\n') {
            *(str + count) = '\0';
            break;
        }
        count++;
    }

    return count;
}

void getString(char str[], int length )
{
    //使用fgets函数接收字符，使用\0替换字符数组最后一位的\n
    fgets(str, length, stdin);
    char * ptrFind = strchr(str, '\n'); //查找字符数组的\n元素，返回\n元素所在的指针
    if(ptrFind) {
        *ptrFind = '\0';
    }

}