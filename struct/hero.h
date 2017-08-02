//
// Created by yuanyueshui on 2017/8/1.
//

#ifndef C_HERO_H
#define C_HERO_H

#include <stdio.h>
#include <stdlib.h>
#define NUM 5

//职业： 英雄、职业、英雄能力、时间
typedef struct _job
{
    int id;
    char * name; //职业名称
    char * desc; //职业描述
}Job;
//Job job //调用，简化结构体的使用

//特殊能力
typedef struct _abillity
{
    int id;
    char * name; //特殊能力名称
    char intro; //特殊能力说明
}Abillity;

//发布时间
typedef struct _pubTime
{
    int year;
    int month;
    int day;
}PubTime;

typedef struct _hero
{
    int id;
    char * name;    //英雄名称
    char sex;       //英雄性别
    Job job;        //英雄职业
    double hp;      //英雄血量
    double speed;   //估计速度
    Abillity abillity;  //特殊能力
    PubTime pubTime;    //上线时间
}Hero;

Job job[] = {
        {1, "法师", "法球"},
        {2, "刺客", "千年杀"},
        {3, "战士", "我的肉特别厚"},
        {4, "射手", "我的攻击速度特别快"},
        {5, "机甲师", "靠机甲吃饭"},
};
//输入函数
void input(void);
//输出函数
void output(void);

#endif //C_HERO_H
