//����
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
//	//����ȫ��ʼ��
//	int arr [10] = { 1,2,3 };
//	//��ȫ��ʼ��
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

//��ά���������Խ��
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


//ð������
//1.����
//2.ָ��

//����
void bubble_sort(int arr[],int sz)
{
	//����
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
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