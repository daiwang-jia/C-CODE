//��������Ϸ
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
//	//��Ϸ����
//	//1.���������
//	int ret = rand() % 100 + 1;
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		scanf_s("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�����");
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
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}


////goto���
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
	printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ȡ���ػ�\n");
	scanf_s("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		goto again;
	}
	return 0;
}