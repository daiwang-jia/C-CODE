//数组
#include <stdio.h>
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data[20];
//	/*int n = 9;
//	int arr2 = [n];*/
//
//	return 0;
//}
//int main()
//{
//	//不完全初始化
//	int arr [10] = { 1,2,3 };
//	//完全初始化
//	int arr2[5] = { 1,2,3,4,5 };
//	return 0;
//
// }
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		/*printf("%d ",arr[i]);*/
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}

//二维数组和数组越界
//int main()
//{
//	//1 2 3 4
//	//2 3 4 5
//	//3 4 5 6
//	int arr1[3][4] = { 1,2,3,4, 2,3,4,5,3,4,5,6 };
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int k = 0; k < 4; k++)
//		{
//			printf("%d ", arr1[i][k]);
//		}
//		printf("\n");
//	}*/
//	/*printf("%d", arr1[2][0]);*/
//	return 0;
//}


//冒泡排序
//1.数组
//2.指针

//数组
void bubble_sort(int arr[],int sz)
{
	//趟数
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
}


int main()
{
	int arr[] = { 2,5,1,7,3,6,9,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz); 
	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}