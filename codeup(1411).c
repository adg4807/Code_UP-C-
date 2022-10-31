
#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[50];
	int arr_n;
	int num;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
		arr[i] = i + 1;
	for (int j = 0; j < num-1; j++)
	{
		scanf("%d", &arr_n);
		arr[arr_n - 1] = 0;
	}
	
	for (int k = 0; k < num; k++)
	{
		if (arr[k] != 0)
			printf("%d", arr[k]);
	}
	return 0;
}
