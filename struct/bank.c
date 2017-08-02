//
// Created by yuanyueshui on 2017/8/2.
//
#include <stdio.h>

typedef struct _bank
{
    char * bankName;
    char * userName;
    double  limit;  //额度
    double billAmount;  //账户余额
}Bank;

double getRepayment(Bank bank);
void modify(Bank *bank);

int main()
{
    Bank zsAcc = {"招商银行", "张三", 50000, 45000};
    double money = getRepayment(zsAcc);
    modify(&zsAcc);
    printf("%.2lf\n", money);
    printf("%s", zsAcc.userName);
    return 0;
}

void modify(Bank *bank)
{
    (*bank).userName = "李四";
}

double getRepayment(Bank bank)
{
    return bank.limit - bank.billAmount;
}