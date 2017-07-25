#include <stdio.h>

int main()
{
    char unit[10][3] = {"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"};
//    char unit2[10][2] = {"cc", "1"};
    int money = 0;
    int count = 0;
    int i = 0;
    int moneys[6];

    scanf("%d", &money);


//    printf("%d", money);

    while (money != 0) {
        moneys[i] = money % 10;
        money /= 10;
//        printf("%d", money);
        i++;
        count++;
    }
//    printf("%d", money);

    for (int j = 0; j < count; j++) {
        printf("%d\n", moneys[j]);
    }
    return 0;
}
