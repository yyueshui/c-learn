#include <stdio.h>
#include <string.h>

//门派
struct Martial
{
    int id;         //门派id
    char name[50];  //门派id
    int count;      //门派的人数
    int type;       //门派类型  1.正派，2.中立， 3.邪派
};

struct Player
{
    int id;
    char name[50];          //玩家名称
    char pass[50];          //玩家密码
    char sex;               //玩家性别
    struct Martial martial; //玩家所属门派
};

int main()
{
    struct Player player = {1, "张飞", "123456", 'f', {1, "昆仑", 500, 3}};
    struct Player player2 = {2, "刘备", "123456", 'f', {1, "蜀国", 1500, 2}};
    struct Player *player3 = &player2;
    printf("%d\t%s\t%s\t%d\t%s\n", player.id, player.name, player.pass, player.sex, player.martial.name);
    printf("%d\t%s\n", (*player3).id, (*player3).martial.name);
    printf("%d\t%s\t%s\n", player3->id, player3->name, player3->martial.name);
    return 0;
}