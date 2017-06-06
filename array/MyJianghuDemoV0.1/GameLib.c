/***************************************************
 * �ļ�����GameLib.c
 * ��  ����ʵ��Game.h�ж���Ĳ�������
 * �����ˣ��Ͼ�ѧ�á���ͷ
 * ��  �ڣ�2016-11-18
 * ��  ����1.0
 * ��  ����http://www.xuetang9.com
 * �ٷ�QQ��614940318���Ͼž���
 *
 **************************************************/
#include "GameLib.h"

void SetTitle(char * title)
{
    SetConsoleTitle(title);
}
void SetColor(int foreColor, int backColor)
{
    HANDLE winHandle;   //���
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //����������ɫ
    SetConsoleTextAttribute(winHandle, foreColor + backColor * 0x10);
}
void SetPosition(int x, int y)
{
    HANDLE winHandle;   //���
    COORD pos = {x, y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //���ù�������
    SetConsoleCursorPosition(winHandle, pos);
}
/* ��x��y���꿪ʼ����rowCount�� */
void Clear(int x, int y, int rowCount)
{

    //ÿ�����78���ַ�-��ӡ78���ո�
    int i, j;
    for(i = 0; i < rowCount; i++)
    {
        SetPosition(x, y + i);
        for(j = 0; j < 78; j++)
        {
            printf(" ");
        }
    }
}







