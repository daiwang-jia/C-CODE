#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	//pa是指针变量，用来存放地址
//
//	//本质上指针就是地址
//	//口语中所说的指针，其实是指针变量（是用来存放地址的一个变量）
//	return 0;
//}

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof   %zu
//
//	printf("%zu\n", sizeof(pc));
//	printf("%d\n", sizeof(ps));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	//指针类型决定了指针在被解引用时访问几个字节
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//	//指针的类型决定了指针+1，-1操作的时候跳过几个字节
//	return 0;
//}

int main()
{
	int a = 0;
	int* pi = &a;
	float* pf = &a;
	//都跳过四个字节，但是不能通用  
	return 0;
}