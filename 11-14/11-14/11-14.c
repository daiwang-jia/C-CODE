#include <stdio.h>
#include <string.h>
//����
//get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//
//}
 void Swap(int *px, int *py)
{
	 int z = *px;
	 *px = *py;
	 *py = z;

}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	//a��b���β�
	Swap(&a,&b);
	printf("%d %d", a, b);
	return 0;
}





