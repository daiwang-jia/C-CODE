//求两个整数的最小公倍数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int i = 1;
//	for (i=1;i < 100000000000;i++)
//	{
//		if (i % a == 0 && i % b == 0 && i!=0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//	return 0;
//}

//倒置字符串
#include <stdio.h>
#include <assert.h>
#include <string.h>
void reserve(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	//逆序整个字符串
	reserve(arr, arr+len - 1);
	//逆序每个单词
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reserve(start, end - 1);
		end++;
		start = end;
	}
	printf("%s\n", arr);
	return 0;
}