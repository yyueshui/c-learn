#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
/***************************************************
 * �ļ�����Game.h
 * ��  ��������������Ϸ��һЩ���Ľṹ�ͺ���
 * �����ˣ��Ͼ�ѧ�á���ͷ
 * ��  �ڣ�2016-11-10
 * ��  ����1.0
 * ��  ����http://www.xuetang9.com
 * �ٷ�QQ��614940318���Ͼž���
 *
 **************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "GameLib.h"

/*********************  ��Ϸ�Ľṹ���Ͷ���   *******************************/

//��ҡ���ͼ��װ��������
/* ��Ϸ��ͼ�ṹ ��Ϸ��ͼ
  ��š����ơ����ܡ���ҵĽ���ȼ� */
typedef struct _map{
    int id;         //��ͼ���
    char name[50];  //��ͼ����
    int minLevel;   //��ҽ������͵ȼ�
    //����ṹ
    COORD coord;    //��ͼ������
    char desc[500]; //��ͼ�Ľ���
}Map;
/* ��Ϸ��������ö�� - ���������ߡ�����Ʒ����Ƭ����Ƭ */
typedef enum _proptype{
    Weapon, Armor, Con, card, Frag
}PropType;
/* ��Ϸ���� - ���������ߡ�����Ʒ����Ƭ */
typedef struct _prop{
    int id;         //���߱��
    char name[50];  //��������
    int leve;       //���ߵļ���
    int stock;      //���ߵĿ�����ұ����еĵ�������
    double price;   //���ߵĵ���
    PropType type;  //���ߵ�����
    union{//���� - ��ѡ1
        int minAttack; //������������Ͷ�Ӧ������
        int minDefence;//����Ƿ��ߣ��Ͷ�Ӧ������
        int minPower;  //�����Ѫƿ������Ʒ���Ͷ�Ӧ���ӵ�����ֵ
    };
    union{//���� - ��ѡ1
        int maxAttack; //������������Ͷ�Ӧ������
        int maxDefence;//����Ƿ��ߣ��Ͷ�Ӧ������
        int maxPower;  //�����Ѫƿ������Ʒ���Ͷ�Ӧ���ӵ�����ֵ
    };
    char desc[200]; //���ߵĹ�������
}Prop;
/* ���ɽṹ */
typedef struct _martial{
    int id;
    char name[50];
    char type[50];  //��������-���ɡ�а��
    COORD hqCoord;  //�ܶ������
    int isOpen;     //�����Ƿ񿪷�
    char desc[1000];//��������
}Martial;
typedef struct _player{
    int id;
    char name[50];
    char pass[50];
    int life;       //�������ֵ
    int level;      //��Ҽ���
    int exp;        //��ҵľ���ֵ
    int hp;         //��ҵ�Ѫ��
    int mp;         //��ҵ�����ֵ
    int mpMax;      //��ǰ������ҵ��������ֵ
    int gold;       //��ҵĽ������
    Martial martial;//��ҵ�����
    COORD coord;    //��ҵ�ǰ���ڵ�ͼ������
    Prop weapon;    //���װ��������
    Prop armor;     //���װ���ķ���

    //��ҵı���
}Player;
typedef struct _monster{
    int id;
    char name[50];
    int level;       //����ļ���
    int hp;         //���������ֵ
    int att;        //����Ĺ�����
    int diff;       //����ķ�����
    int minMoney;   //ɱ��������������ٽ��ֵ
    int maxMoney;
    int exp;        //ɱ���������һ�õľ���ֵ
    //��չ��ɱ���������ҿ��Ի�õĵ����б�
    int state;      //���ﵱǰ��״̬��0��ʾ������������0��ʾ�������
    COORD coord;    //���������
}Monster;
void Init();//��ʼ����Ϸ����
void Show();//��ʾȫ������

/* ��ʾ��Ϸ�Ļ�ӭ��Ϣ */
void ShowWelcome();
/* ��ʾ��Ϸ��ͼ */
void ShowMap();
/* ����Ϣ������ʾ��ǰ��ͼ����Ϣ */
void ShowMapInfo();
/* ��ʾ��Ϸ��ͼ�·�����Ϸ��Ϣ */
void ShowInfomation();
/* ��ʾ��Ϸ�����˵� */
void ShowMainMenu();
/* ����Ϣ������ʾ��ҵĸ������� */
void ShowPlayerInfo();
/* ����Ϣ������ʾ��ǰ��ͼ�Ĺ��� */
void ShowMonsters();

/* ������Ϸ���˵���ҵ�� */
void ProcessMainMenu(char key);
/* pk����ķ��� */
void Fight(int monsterId);
/* ˲���ƶ� */
void Move(int x, int y);





#endif // GAME_H_INCLUDED
