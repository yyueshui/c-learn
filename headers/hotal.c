//
// Created by yuanyueshui on 2017/7/28.
//
#include <stdio.h> //<> 引入系统头文件
#include "hotal.h" // "" 使用双引号包含头文件时，程序会在当前目录查找头文件（自定义头文件）


char hotalNames[5][50] = {
        "北洛酒店", "香榭丽舍酒店", "阿斯图里酒店", "斯力克酒店", "如家酒店"
};

int menu(void)
{
    int choice;
    printf("请选择入住的酒店\n");
    for (int i = 0; i < TOTAL; ++i) {
        printf("%d、 %s\n", i + 1, *(hotalNames + i));
    }

    printf("请输入你的选择：");
    while(1) {
        scanf("%d", &choice);
        if(choice > 0 && choice <= 5) {
            break;
        }
    }

    return choice;
}

int getDay(void)
{
    int day = 0;

    printf("请选择天数：");
    while(1) {
        scanf("%d", &day);
        if(day > 0) {
            break;
        }
    }

    return day;
}

void getPrice(int choice, double *price)
{
    switch (choice) {
        case 2:
            *price = HOTAL2;
            break;
        case 3:
            *price = HOTAL3;
            break;
        case 4:
            *price = HOTAL4;
            break;
        case 5:
            *price = HOTAL5;
            break;
        default:
            *price = HOTAL1;
            break;
    }
}

void getTotal(double price, int day, double *total)
{

    for (int i = 0; i < day; ++i) {
        *total += price;
        price = price * DISCOUNT;
    }

}