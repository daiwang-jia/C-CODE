#include <stdio.h>
main()
{
	char ch = 0;
	while (scanf_s("%c", &ch) == 1)
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			printf("%c is an alphabet.\n", ch);
		else
			printf("%c is not an alphabet.\n", ch);
		getchar();
	}
	return 0;
}