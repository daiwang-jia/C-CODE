#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3)
	{
		//�ж�
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b == c)
			{
				printf("�ȱ�������\n");
			}
			else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a))
			{
				printf("����������\n");
			}
			else
			{
				printf("��ͨ������\n");
			}
		}
		else
		{
			printf("NOT A TRIANGLE\n");
		}
	}
	return 0;
}