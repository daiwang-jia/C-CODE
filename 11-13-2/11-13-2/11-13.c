//猜数字游戏
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*******  1.play  ***\n");
//	printf("*******  0.ex.t  ***\n");
//
//}
//void game()
//{
//	//游戏过程
//	//1.生成随机数
//	int ret = rand() % 100 + 1;
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		scanf_s("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了！！！");
//			break;
//		}
//	}
//
//
//
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}


////goto语句
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机\n");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		goto again;
	}
	return 0;
}