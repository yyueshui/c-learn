#ifndef GAMELIB_H_INCLUDED
#define GAMELIB_H_INCLUDED
/***************************************************
 * �ļ�����GameLib.h
 * ��  ��������������Ϸ�г��õ�ϵͳ����������������ɫ�������ȣ�
 * �����ˣ��Ͼ�ѧ�á���ͷ
 * ��  �ڣ�2016-11-10
 * ��  ����1.0
 * ��  ����http://www.xuetang9.com
 * �ٷ�QQ��614940318���Ͼž���
 *
 **************************************************/
 #include <stdio.h>
 #include <windows.h>

/* ���ÿ���̨���ڵı��� */
void SetTitle(char *title);
/* �������ֵ�ǰ��ɫ�ͱ���ɫ */
/* 0-��ɫ, 1-��ɫ,   2-��ɫ,      3-ǳ��ɫ,     4-��ɫ,   5-��ɫ,   6-��ɫ,   7-��ɫ,
 * 8-��ɫ, 9-����ɫ, 10-����ɫ,   11-��ǳ��ɫ   12-����ɫ 13-����ɫ 14-����ɫ 15-����ɫ
 */
void SetColor(int foreColor, int backColor);
/* ���ù���λ�� */
void SetPosition(int x, int y);
/* ��x��y���꿪ʼ����rowCount�� */
void Clear(int x, int y, int rowCount);


#endif // GAMELIB_H_INCLUDED
