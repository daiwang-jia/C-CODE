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


//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
#include <stdio.h>
void menu()
{
    printf("****************************\n");
    printf("*******1.add    2.sub*******\n");
    printf("*******3.mul    4.div*******\n");
    printf("*******0.exit    ***********\n");
    printf("****************************\n");
}

int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int ret = 0;
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf_s("%d", &input);
        printf("����������������:>");
        scanf_s("%d %d", &x, &y);
        switch (input)
        {
        case 1:
            ret = Add(x, y);
            printf("%d\n", ret);
            break;
        case 2:
            ret = Sub(x, y);
            printf("%d\n", ret);
            break;
        case 3:
            ret = Mul(x, y);
            printf("%d\n", ret);
            break;
        case 4:
            ret = Div(x, y);
            printf("%d\n", ret);
            break;
        case 0:
            printf("�˳�������\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);
    return 0;
}