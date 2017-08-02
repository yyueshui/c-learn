#include <stdio.h>
#include <string.h>

/**
 * 道具结构
 *
 */
typedef struct _prop
{
    int id;
    char name[50]; //道具名称
    double price;
    int stock;  //在商城表示库存，如果在背包中，就表示叠加数量
    char desc[200]; //道具描述
}Prop;

/**
 * 背包
 */
typedef struct _bag
{
    int playerId; //所属玩家id
    int count; //当前背包中道具的数量
    int max; //当前背包的插槽总数
    Prop props[8]; //背包中道具数组,插槽数量可以让用户购买
}Bag;

/**
 * 玩家
 */
typedef struct _player
{
    int id;
    char name[50]; //玩家昵称
    char pass[50];
    Bag bag; //玩家背包
    double gold; //玩家金币，人性化显示，可以将100000铜币转换成银币、金币显示
    double sysee; //元宝
}Player;

//道具，玩家指针
Prop *ptrProps;
Player *ptrPlayers;

//数量
int propsCount = 0;
int playerCount = 0;

//初始化数据
void init();
//显示方法
void showProps();
void showPlayers();

/**
 * 交易
 * @param player    参与交易玩家指针，为了方便修改玩家交易后的金币数
 * @param propId    道具ID
 */
void trade(Player *player, int propId);

int main()
{
    init();
    showProps();
    showPlayers();
    trade(&ptrPlayers[0], 3);
    printf("交易后\n");
    showProps();
    showPlayers();
    return 0;
}

void trade(Player *player, int propId)
{
    //判断条件： 道具库存， 玩家余额， 玩家背包空间
    int i, j;

    Prop *tradeProp; //需要购买的商品指针
    for (i = 0; i < propsCount; ++i) {
        if(propId == ptrProps[i].id) {
            tradeProp = ptrProps + i;
            break;
        }
    }

    //道具库存判断
    if(tradeProp->stock <= 0 ) {
        printf("道具卖空了！");
        return;
    }

    //玩家金币判断
    if(player->gold < tradeProp->price) {
        printf("钱包都是瘪的！");
        return;
    }

    //玩家背包空间
    //player->bag.max != 0 没有初始化背包数据，防止player->bag.count， player->bag.max都是0
    if(player->bag.count >= player->bag.max && player->bag.max != 0) {
        printf("背包空间不足啦！");
        return;
    }

    //减道具库存
    tradeProp->stock--;
    //扣金币
    player->gold -= tradeProp->price;
    /**
     * 玩家道具增加
     * 判断：玩家背包是否有此道具，如果没有，将此道具添加到背包中，如果有，背包中该道具数+1
     */
    for (j = 0; j < player->bag.count; ++j) {
        //该道具在背包中存在
        if(player->bag.props[i].id == propId) {
            player->bag.props[i].stock++;
            break;
        }
    }
    //j == player->bag.count证明循环已执行完，没有执行break
    if(j == player->bag.count) {
        //向背包中添加道具
        player->bag.props[player->bag.count].id = tradeProp->id;
        player->bag.props[player->bag.count].price = tradeProp->price;
        player->bag.props[player->bag.count].stock = 1;
        //字符串需要拷贝
        strcpy(player->bag.props[player->bag.count].name, tradeProp->name);
        strcpy(player->bag.props[player->bag.count].desc, tradeProp->desc);
        //增加背包道具总数
        player->bag.count++;
    }

}

void init()
{
    //道具
    static Prop props[] = {
        {1, "双倍经验卡", 3000, 10, "双击666"},
        {2, "道袍", 5000, 8, "只可远观不可亵玩"},
        {3, "生锈的铁剑", 8000, 10, "新手专用"},
        {4, "无极袍", 13000, 5, "刀枪不入水火不侵"},
        {5, "直升一级丹", 83000, 10, "吃了以后保准还想再吃"},
    };

    //玩家
    static Player players[] = {
        {1, "张三丰", "123456", .gold=50000},
        {2, "超级毛毛虫", "123456", .gold=150000},
        {3, "元始天尊", "123456", .gold=500000},
        {4, "星河", "123456", .gold=1500000},
    };

    //赋值给指针
    ptrProps = props;
    ptrPlayers = players;

    //计算数量
    propsCount = sizeof(props) / sizeof(Prop);
    playerCount = sizeof(players) / sizeof(Player);
}

void showProps()
{
    if(ptrProps == NULL) return;
//    printf("编号\t名称\t单价\t库存\t商品介绍\n");
    printf("%-5s%-14s%-7s\t库存\t商品介绍\n", "编号", "名称", "单价"); // -代表左对齐，5个空间
    for (int i = 0; i < propsCount; ++i) {
        printf("%-5d%-14s%-7.0lf\t%d\t%s\n", ptrProps[i].id, ptrProps[i].name, ptrProps[i].price, ptrProps[i].stock, ptrProps[i].desc);
    }
}

void showPlayers()
{
    if(ptrPlayers == NULL) return;
    printf("编号\t昵称\t密码\t金币\n");
    for (int i = 0; i < playerCount; ++i) {
        printf("%d\t%s\t%s\t%.lf\n", ptrPlayers[i].id, ptrPlayers[i].name,  ptrPlayers[i].pass,  ptrPlayers[i].gold);
        //显示玩家的背包
        for (int j = 0; j < ptrPlayers[i].bag.count; ++j) {
            printf("\t%d\t%s\t%d\n", ptrPlayers[i].bag.props[j].id, ptrPlayers[i].bag.props[j].name, ptrPlayers[i].bag.props[j].stock);
        }
    }
}