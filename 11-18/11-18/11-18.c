//º¯ÊıµÄÉùÃ÷
#include <stdio.h>
//int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d",sum);
//	return 0;
//
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
#include "sub.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = sub(a, b);
	printf("%d",sum);
	return 0;
}