#include <stdio.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	//strcpyº¯Êý
	strcpy(arr1,arr2);
	printf("%s", arr1);
	return 0;
}