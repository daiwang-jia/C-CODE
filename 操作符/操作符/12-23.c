#include <stdio.h>
//��λ������
//7
//0000000000000000000000000111  ԭ��
//0000000000000000000000000111  ����
//0000000000000000000000000111  ����

//-7
//1000000000000000000000000111  ԭ��
//1111111111111111111111111001  ���루��ͼ�һ��
//1111111111111111111111111000  ����


//�������ڴ��д���ǲ���
//int main()
//{
//	int a = 7;
//	//0000000000000000000000000111  ����  7
//	//����
//	//0000000000000000000000001110  �µĲ��� 14
//	//�ƶ����Ƕ�����λ
//	//��߶������ұ߲�0
//	int b=a << 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	//1111111111111111111111111001  ����  -7
//	//����
//	//1111111111111111111111110010  �µĲ��� 14
//	//�ƶ����Ƕ�����λ
//	//��߶������ұ߲�0
//	int b = a << 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}

//����
// VS������������
//1.������λ   �ұ߶�������߲�ԭ����λ
// 
//2.�߼���λ   �ұ߶�������߲�0
//int main()
//{
//	int a = 7;
//	//0000000000000000000000000111  ����  7
//	// ����
//	//0000000000000000000000000011  ����  3
//	int b = a >> 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
int main()
{
	int a = -7;
	//1111111111111111111111111001  ����  -7
	// ����
	//1111111111111111111111111100  ����  -7
	int b = a >> 1;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}