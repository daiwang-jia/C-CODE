#include <stdio.h>
//1-100有多少个9
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i < 10)
//		{
//			if (i % 10 == 9)
//			{
//				sum = sum + 1;
//			}
//		}
//		else
//		{
//			if (i / 10 == 9 && i%10==9)
//			{
//				sum = sum + 2;
//			}
//			if (i / 10 == 9 || i % 10 == 9)
//			{
//				sum = sum + 1;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}21
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i / 10 == 9 && i%10==9)
//		{
//			sum = sum + 2;
//		}
//		if (i / 10 == 9 && i % 10 != 9)
//		{
//			sum = sum + 1;
//		}
//		if (i / 10 != 9 && i % 10 == 9)
//		{
//			sum = sum + 1;
//		}
//		
//	}
//	printf("%d", sum);
//	return 0;
//}20

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//10个数中最大值
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int k = 0; k < 10; k++)
//	{
//		if (arr[k] > max)
//		{
//			max = arr[k];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}



//九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
