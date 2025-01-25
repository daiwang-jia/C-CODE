#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3)
	{
		//判断
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b == c)
			{
				printf("等边三角形\n");
			}
			else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a))
			{
				printf("等腰三角形\n");
			}
			else
			{
				printf("普通三角形\n");
			}
		}
		else
		{
			printf("NOT A TRIANGLE\n");
		}
	}
	return 0;
}