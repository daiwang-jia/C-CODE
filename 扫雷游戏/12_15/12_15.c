//ɨ����Ϸ
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("******  1.play  ****\n");
	printf("******  0.exit  ****\n");
	printf("********************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ�����������Ϊָ������
	//mine��ʼȫΪ��0��
	InitBoard(mine,ROWS,COLS,'0');
	//show��ʼȫΪ��*��
	InitBoard(show, ROWS, COLS,'*');

	//DisplayBoard(mine,ROW,COL);

	//������
	SetMine(mine,ROW,COL);


	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	//���������
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}