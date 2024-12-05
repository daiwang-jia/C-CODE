#include <stdio.h>
#include "game.h"
//������
//������Ϸ���߼�
void menu()
{
	printf("************************\n");
	printf("*****1.play   0.exit****\n");
	printf("************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		PlayerMove(board,ROW,COL);
		//�ж���Ӯ
		ret=IsWin(board,ROW,COL);

		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board,ROW,COL);
		//�ж���Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

void DidplayBoard(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�������:>\n");

	printf("����������:>");
	scanf_s("%d %d", &x, &y); 
}