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
    char line[100];  // 用于存储每行输入的字符

    printf("请输入多行字母（按Ctrl+D结束）：\n");

    // 使用一个临时字符数组保存所有输入的内容
    char input[1000];  // 假设最多输入1000个字符
    int input_length = 0;

    // 逐行读取输入直到输入结束（Ctrl+D 或 Ctrl+Z）
    while (fgets(line, sizeof(line), stdin)) {
        // 将读取的每行内容追加到 input 数组中
        for (int i = 0; line[i] != '\0'; i++) {
            input[input_length++] = line[i];
        }
    }

    // 处理所有输入的字符并输出转换结果
    printf("\n转换后的结果：\n");
    for (int i = 0; i < input_length; i++) {
        char ch = input[i];

        // 判断字符是否是小写字母
        if (ch >= 'a' && ch <= 'z') {
            // 小写字母转为大写
            printf("%c", ch - 32);
        }
        // 判断字符是否是大写字母
        else if (ch >= 'A' && ch <= 'Z') {
            // 大写字母转为小写
            printf("%c", ch + 32);
        }
        else {
            // 非字母字符不转换，原样输出
            printf("%c", ch);
        }
    }

    printf("\n");

    return 0;
}

