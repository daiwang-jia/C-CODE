#include <stdio.h>

//二级指针
 
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，也是一级指针变量
//	//*pa = 20;
//	//printf("%d\n", a);
//
//	int** ppa = &pa;//ppa是一个二级指针变量
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}


//指针数组
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int b = 20;
//	int* pb = &b;
//	int c = 30;
//	int* pc = &c;
//
//	int arr[10];
//	int* parr[10] = { &a,&b,&c };//指针数组
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));//10 20 308u
//	}
//	return 0;
//}


//指针数组
int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
}