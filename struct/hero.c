//
// Created by yuanyueshui on 2017/8/1.
//
#include "hero.h"
Hero hero[NUM];

void input(void)
{
    int jobChoice;
    for (int i = 0; i < 1; ++i) {
        printf("请输入第%d位英雄的信息： \n", i+1);
        hero[i].id = i + 1;
        printf("名称： \n");
        hero[i].name = (char*) malloc(50);
        scanf("%s", (hero[i]).name);
        fflush(stdin);//良好习惯，录入字符后记得清空缓冲区
        printf("性别： \n");
        scanf("%s", &hero[i].sex);
        fflush(stdin);

        printf("请选择职业： \n");
        for(int j = 0; j < NUM; ++j) {
            printf("%d.%s： \n", job[j].id, job[j].name);
        }
        scanf("%d", &jobChoice);

        fflush(stdin);
        hero[i].job = job[jobChoice - 1];

        printf("请输入血量： \n");
        scanf("%d", &hero[i].hp);
        fflush(stdin);
    }


}

void output(void)
{

}

