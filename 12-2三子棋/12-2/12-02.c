#include <stdio.h>
#include "game.h"
//Èý×ÓÆå
//²âÊÔÓÎÏ·µÄÂß¼­
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
	//³õÊ¼»¯ÆåÅÌ
	InitBoard(board, ROW, COL);
	//´òÓ¡ÆåÅÌ
	DisplayBoard(board,ROW,COL);
	//ÏÂÆå
	while (1)
	{
		PlayerMove(board,ROW,COL);
		//ÅÐ¶ÏÊäÓ®
		ret=IsWin(board,ROW,COL);

		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board,ROW,COL);
		//ÅÐ¶ÏÊäÓ®
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		
	}
	if (ret == '*')
	{
		printf("Íæ¼ÒÓ®\n");
	}
	else if(ret=='#')
	{
		printf("µçÄÔÓ®\n");
	}
	else
	{
		printf("Æ½¾Ö\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//´òÓ¡²Ëµ¥
		printf("ÇëÑ¡Ôñ:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);
	return 0;
}

void DidplayBoard(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("Íæ¼ÒÏÂÆå:>\n");

	printf("ÇëÊäÈë×ø±ê:>");
	scanf_s("%d %d", &x, &y); 
}