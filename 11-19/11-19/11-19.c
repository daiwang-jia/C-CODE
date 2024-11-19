//递归
#include <stdio.h>
//int main()
//{
//	int x = 023;
//	x++;
//	printf("%d", x);
//    return 0;
//
//}
//%d 是打印有符号的整数
//%u 是打印无符号整数
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);
	print(num);
	return 0;
}