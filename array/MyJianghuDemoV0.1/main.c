#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "GameLib.h"
#include "Game.h"

extern int X, Y;

int main()
{
    char key;   //���յ����û�����
    SetTitle("Ц������֮���ұ��� �Ͼ�C���԰�");
    SetColor(10, 0);
    Init();
    ShowWelcome();
    ShowMap();
    ShowInfomation();
    ShowMainMenu();
    while(1)
    {
        fflush(stdin);
        //�ȴ��û�����ĳ����
        key = getch();//�޻��Խ���ĳ������ getchar();
        fflush(stdin);
        if(key == '1' || key == '2' || key == '3' || key == '4' || key == '5'){
            //printf("1-5֮�����Ϸ�˵�");
            ProcessMainMenu(key);//ͨ������ȥ�����û��Ĳ˵�ѡ��
            continue;
        }
        else if(key == VK_UP || key == 72)//�û������ϼ�
        {
            Y--;
        }
        else if(key == 39 || key == 77)//��
        {
            X++;
        }
        else if(key == 40 || key == 80)//��
        {
            Y++;
        }
        else if(key == 37 || key == 75)//��
        {
            X--;
        }
        if(X > 7) X = 0;
        if(X < 0) X = 7;
        if(Y > 7) Y = 0;
        if(Y < 0) Y = 7;
        ShowMap();//������ʾ��ͼ
    }
    return 0;
}
