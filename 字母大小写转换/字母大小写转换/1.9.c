//#include <stdio.h>
//main()
//{
//	char ch = 0;
//	while (scanf_s("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//
//		getchar();
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    char line[100];  // ���ڴ洢ÿ��������ַ�

    printf("�����������ĸ����Ctrl+D��������\n");

    // ʹ��һ����ʱ�ַ����鱣���������������
    char input[1000];  // �����������1000���ַ�
    int input_length = 0;

    // ���ж�ȡ����ֱ�����������Ctrl+D �� Ctrl+Z��
    while (fgets(line, sizeof(line), stdin)) {
        // ����ȡ��ÿ������׷�ӵ� input ������
        for (int i = 0; line[i] != '\0'; i++) {
            input[input_length++] = line[i];
        }
    }

    // ��������������ַ������ת�����
    printf("\nת����Ľ����\n");
    for (int i = 0; i < input_length; i++) {
        char ch = input[i];

        // �ж��ַ��Ƿ���Сд��ĸ
        if (ch >= 'a' && ch <= 'z') {
            // Сд��ĸתΪ��д
            printf("%c", ch - 32);
        }
        // �ж��ַ��Ƿ��Ǵ�д��ĸ
        else if (ch >= 'A' && ch <= 'Z') {
            // ��д��ĸתΪСд
            printf("%c", ch + 32);
        }
        else {
            // ����ĸ�ַ���ת����ԭ�����
            printf("%c", ch);
        }
    }

    printf("\n");

    return 0;
}

