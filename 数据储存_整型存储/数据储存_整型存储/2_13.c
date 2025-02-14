//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;  //没有符号位
//
//	printf("a=%d,b=%d,c=%d", a, b, c);  //-1,-1,255
//	//有符号的char   -128到127
//	//无符号的char   0到255
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