#include <stdio.h>
//  F5�������ԣ�������,�ϵ㴦ͣ��
//  
//  F9 �ϵ�
//  F10 �𲽵���
//  F11 ��������



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//}



//void test(int a[])
//{
//	//
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//test(arr);
//	char arr[] = "abcdef";
//	return 0;
//
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	//int ret=1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//strcpy

//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	//strcpy���Դ�ַ����е�\0Ҳ����
//	strcpy_s(arr1, sizeof(arr1), arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ʵ��strcpy
//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
////����
////assert(src/dest!=NULL)
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] =   "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//const  
//const ����ָ�����
//1.const����*���  ��˼��pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵ���Ըı�
//2.const����*�ұߣ�int* const p����˼����˼��pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵ�����Ըı�
//int main()
//{
//	const int num = 10;
//	//num = 20;�ᱨ��
//	const int* p = &num;
//	//*p = 20;����
//	printf("%d\n", num);
//}0


//ʵ��strlen
#include <assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str!=NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
