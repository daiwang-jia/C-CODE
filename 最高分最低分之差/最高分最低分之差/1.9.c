#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (int j = 0; j < n; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
		
		{
			if (arr[j]< arr[0])
			{
				min = arr[j];
			}
		}
	}
	int ret = max - min;
	printf("%d", ret);
	return 0;
}