#include <stdio.h>

int fib(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int ret = fib(a);
	printf("%d\n", ret);
	return 0;
}