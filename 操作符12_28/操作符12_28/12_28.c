#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//����
//	printf("%d\n", c);//  1
//	//if (a && b)
//	//{
//
//	//}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;// ��
//	printf("%d", c);//1
//	return 0;
//}

//��������������Ŀ��������
//���ʽ1 �� ���ʽ2 : ���ʽ3
//  ��         ��        ����
//  ��       ����         ��


//�±�����
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//
// 	return 0;
//}


#include <string.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
void set_stu(struct Stu* ps)
{
	//strcpy_s((*ps).name, sizeof((*ps).name),"zhangsan");
	//(*ps).age = 20;
	//(*ps).score = 100.0;
	strcpy_s(ps->name, sizeof(ps->name), "zhangsan");
	ps->age = 20;
	ps->score = 100.0;
}

void print_stu(struct Stu ss)
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
}

int main()
{
	struct Stu s = { 0 };

	set_stu(&s);
	print_stu(s);
	return 0;

}