#include <stdio.h>
//野指针
// 
//1.指针未初始化
//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

 //2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int *p=arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放
//int * test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test(); 
//  if (p!=NULL)
// {
//		printf("%d\n",*p);//可以使用，但是值会变
//  }
// 
//	return 0;
//}

//然后避免野指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//初始化
//	//NULL  ->  0
//	int* p2 = NULL;//此时*p2不能使用
//	if (p2 != NULL)
//	{
//		*p2 = 0;//此时可以使用
//	}
//	return 0;
//}












//指针运算
#include <stdio.h>

//指针+-整数
//#define N 5
//float arr[N];
//float* vp;
//for (vp = &arr[0]; vp < &arr[5]; )
//{
//	*vp++ = 0;
//	//*vp=0   vp++
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	////数组下标的写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	return 0;
//}


////指针与指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

#include <string.h>


//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//指针-指针
//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str-start;
//}
//
//int main()
//{
//	int len =my_strlen("abcdef");
//	printf("%d\n", len);
//	
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	//arr是首元素地址
	//&arr[0
	int* p = arr;
	//通过指针来访问数组
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}