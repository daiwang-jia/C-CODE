#include <stdio.h>
//Ұָ��
// 
//1.ָ��δ��ʼ��
//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

 //2.ָ��Խ�����
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

//3.ָ��ָ��Ŀռ��ͷ�
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
//		printf("%d\n",*p);//����ʹ�ã�����ֵ���
//  }
// 
//	return 0;
//}

//Ȼ�����Ұָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//��ʼ��
//	//NULL  ->  0
//	int* p2 = NULL;//��ʱ*p2����ʹ��
//	if (p2 != NULL)
//	{
//		*p2 = 0;//��ʱ����ʹ��
//	}
//	return 0;
//}












//ָ������
#include <stdio.h>

//ָ��+-����
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
//	////�����±��д��
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


////ָ����ָ��
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

//ָ��-ָ��
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
	//arr����Ԫ�ص�ַ
	//&arr[0
	int* p = arr;
	//ͨ��ָ������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}