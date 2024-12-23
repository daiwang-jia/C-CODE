//扫雷游戏
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
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定内容
	//mine初始全为‘0’
	InitBoard(mine,ROWS,COLS,'0');
	//show初始全为‘*’
	InitBoard(show, ROWS, COLS,'*');

	//DisplayBoard(mine,ROW,COL);

	//设置雷
	SetMine(mine,ROW,COL);


	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	//设置随机数
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}