//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;  //û�з���λ
//
//	printf("a=%d,b=%d,c=%d", a, b, c);  //-1,-1,255
//	//�з��ŵ�char   -128��127
//	//�޷��ŵ�char   0��255
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf(" % d\n", i + j);  //-10
//	return 0;
//}


#include <stdio.h>
#include <Windows.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(1000);
	}
	return 0;
}