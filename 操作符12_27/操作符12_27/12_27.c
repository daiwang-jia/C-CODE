#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//   ~�Ƕ�����ȡ��
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = ++a;//4
//	int c = a++;//3
//	//ǰ��++����++����ʹ��
//	//����++����ʹ�ã���++
//	printf("%d\n", a);//4
//	printf("%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20
//	return 0;
//}

//int main()
//{
//	int a = (int)3.89;
//	printf("%d\n", a);//3
//	return 0;
//
//}



void test1(int arr[])//�������ָ��
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])//�������ָ��
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10
	test1(arr);//8
	test2(ch);//8
	return 0;
}