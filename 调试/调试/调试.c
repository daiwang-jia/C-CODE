#include <stdio.h>
//  F5启动调试，运行完,断点处停下
//  
//  F9 断点
//  F10 逐步调试
//  F11 函数调用



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//打印
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
//	//strcpy会把源字符串中的\0也拷贝
//	strcpy_s(arr1, sizeof(arr1), arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//实现strcpy
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
////断言
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
//const 修饰指针变量
//1.const放在*左边  意思是p指向的对象不能通过p来改变了，但是p变量本身的值可以改变
//2.const放在*右边（int* const p）意思是意思是p指向的对象能通过p来改变了，但是p变量本身的值不可以改变
//int main()
//{
//	const int num = 10;
//	//num = 20;会报错
//	const int* p = &num;
//	//*p = 20;报错
//	printf("%d\n", num);
//}0


//实现strlen
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
