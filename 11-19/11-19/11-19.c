//�ݹ�
#include <stdio.h>
//int main()
//{
//	int x = 023;
//	x++;
//	printf("%d", x);
//    return 0;
//
//}
//%d �Ǵ�ӡ�з��ŵ�����
//%u �Ǵ�ӡ�޷�������
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