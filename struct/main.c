#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hero
{
    int id;
    char name[50];  //名字
    int level;      //等级
    int hp;         //血量
    int mp;         //魔法值
    char skill[50]; //技能
};

struct heros
{
    int id;
    char * name;  //名字
    int level;      //等级
    int hp;         //血量
    int mp;         //魔法值
    char * skill; //技能
};

int main()
{
    struct hero hero1;
    hero1.id = 1;
    strcpy(hero1.name, "亚瑟"); //字符数组赋值必须用strcpy
    hero1.hp = 500;
    hero1.level = 1;
    hero1.mp = 300;
    strcpy(hero1.skill, "旋风");

    struct hero hero2 = {2, "机器人", 3, 5, .skill="test"}; //可以只给某一个属性赋值

    struct heros heros1 = {1, "程咬金", 3, 5, .skill="test2"};
    heros1.name = (char *)malloc(50); //结构体属性使用字符指针的时候，必须先申明，给空间
    printf("请输入英雄名称\n");
    scanf("%s", heros1.name);


    printf("%d\t%s\t%d\t%d\t%d\t%s\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);
    printf("%d\t%s\t%d\t%d\t%d\t%s\n", hero2.id, hero2.name, hero2.level, hero2.hp, hero2.mp, hero2.skill);
    printf("%d\t%s\t%d\t%d\t%d\t%s\n", heros1.id, heros1.name, heros1.level, heros1.hp, heros1.mp, heros1.skill);

    heros1.name = NULL;
    free(heros1.name);

    return 0;
}