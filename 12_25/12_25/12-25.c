#include <stdio.h>


//   &
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000000000000000000000000011   3  ����
//	//10000000000000000000000000000101    -5  ԭ��
//	//11111111111111111111111111111010     -5   ����
//	//11111111111111111111111111111011   -5   ����
//	//00000000000000000000000000000011     3 & -5  = 3
//
//	printf("%d", c);//3
//	return 0;
//}


//   |
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//00000000000000000000000000000011   3  ����
//	//11111111111111111111111111111011   -5   ����
//	//11111111111111111111111111111011     3 | -5 = -5
//
//	printf("%d", c);//3
//	return 0;
//}



//   ^   ��ͬΪ0������Ϊ1
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//00000000000000000000000000000011   3  ����
//	//11111111111111111111111111111011   -5   ����
//	//11111111111111111111111111111000     3 ^ -5  =  -8
//
//	printf("%d", c);//3
//	return 0;
//}


//int main()
//{
//	//3^3=0    ->a^a=0
//	//0^5=5  ->0^a=a
//	//3^3^5=5
//	//3^5^3=5
//	//���֧�ֽ�����
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}


//�������洢���ڴ����ж�������1�ĸ���
//int main()
//{
//	//a&1
//	//000000000000000000000000000011
//	//000000000000000000000000000001
//	//000000000000000000000000000001
//	return 0;
//}
