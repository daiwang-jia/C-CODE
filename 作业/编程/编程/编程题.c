
////1 不使用数组下标，打印数组内容
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

//字符串逆序
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[10001] = { 0 };
	gets(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}