
////1 ��ʹ�������±꣬��ӡ��������
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//�ַ�������
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//��a+aa+aaa+aaaa+aaaaa
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��ӡˮ�ɻ���
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//�õ�i��ÿһλ������n�η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}

////��ӡ����
//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * line - 2 * i - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ
#include <stdio.h>
int main()
{
	int money = 0;
	scanf_s("%d", &money);
	int total = money;
	int empty = money;
	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;

	}
	printf("%d\n", total);

	return 0;
}

int main()
{
	int money = 0;
	scanf_s("%d", &money);
	if (money > 0)
	{
		printf("%d\n", 2 * money - 1);
	}
	return 0;
}