#include <stdio.h>


int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int count = 5;
    int deleteVar;
    int deleteIndex = -1;

    printf("请输入要删除的值");

    scanf("%d", &deleteVar);
    for (int i = 0; i < count; ++i) {
        if(deleteVar == numbers[i]) {
            deleteIndex = i; //记录要删除的数组下标
        }
    }

    if(-1  == deleteIndex) {
        printf("未找到要删除的值");
    } else {
        for (int j = deleteIndex; j < count; ++j) {
            numbers[j] = numbers[j+1];
        }
    }
    count--; //变量其实没有真删除
    for (int k = 0; k < count; ++k) {
        printf("新数组值%d \n", numbers[k]);
    }

    return 0;
}