//#include <stdio.h>
////�ж�����
//char judgement(int num)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 2; i <= num - 1; i++)
//	{
//		if (num % i == 0)
//		{
//			printf("��������");
//			break;
//		}
//		else
//		{
//			k = 1;
//		}
//	}
//	if (k == 1)
//	{
//		printf("������");
//	}
//	 
//
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int ret = judgement(num);
//
//	return 0;
//
//}



//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) 
//	{
//		if (year %4 == 0) 
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d  ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}

//���ֲ���
#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;//�����±�
	}
	return -1;//�Ҳ���
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret =binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;

}
































