//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n:", a, b, c);//9 23 8  
//	return 0;
//}











//统计二进制中1的个数
#include <stdio.h>
//1
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//2
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//3
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//如果要判断一个数是不是二的N次方
// if（n&（n-1）==0）
//{
// 
//}



//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int n=count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//IO型
//输入
//计算
//输出


//接口型
//只需完成接口函数

//求两个数二进制位中不同位的数
//两个int（32）位整数m和n的二进制中，有多少个位（bit）不同

//1
//int count_diff_bit(int x, int y )
//{
//	int z = x ^ y;
//	int count = 0;
//	while (z)
//	{
//		z = z & (z - 1);
//		count++;
//	}
//	return count;
//}

//2
//int count_diff_bit(int x, int y)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) != ((y >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//获取一个整数二进制中所有的偶数位和奇数位，分别打印二进制序列
//10
//00000000000000000000000001010

//int main()
//{
//	//获取奇数位
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//
//	}
//	printf("\n");
//	//偶数
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//
//	}
//	return 0;
//}


// X图形
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (j + i == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//获得月份天数
int is_leap_year(int y)
{
	return (((y % 4) == 0 && (y % 100 != 0)) || (y % 400 == 0));
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf_s("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if (is_leap_year(y) == 1 && (m==2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}