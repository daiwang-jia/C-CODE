#include <stdio.h>
main()
{
	int N = 0;
	scanf_s("%d",&N);
	int arr[50] = { 0 };
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d",&arr[i]);
	}
	int del = 0;
	int j = 0;
	scanf_s("%d", &del);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] != del)
		{
			arr[j] = arr[i];
			j = j + 1;
		}
	}
	for (int k = 0; k < j; k++)
	{
		printf("%d ", arr[k]);
	}
	return 0;
}