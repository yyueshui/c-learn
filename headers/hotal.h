//
// Created by yuanyueshui on 2017/7/28.
//

#ifndef C_HOTAL_H
#define C_HOTAL_H

#define HOTAL1 888.00
#define HOTAL2 1888.00
#define HOTAL3 1333.00
#define HOTAL4 2000.00
#define HOTAL5 8888.00
#define DISCOUNT 0.95
#define TOTAL 5

//菜单函数： 显示菜单选项，接受并返回用户输入
int menu(void);

//返回用户预订的天数
int getDay(void);

//计算价格
void getPrice(int choice, double *price);

void getTotal(double price, int day, double *total);

#endif //C_HOTAL_H
