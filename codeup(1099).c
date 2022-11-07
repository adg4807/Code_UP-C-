#include <stdio.h>

int main(void)
{
	int arr[10][10];
	int m = 1, n = 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}

	while (1)
	{
		if (arr[m][n] == 0)
			arr[m][n] = 9;

		else if (arr[m][n] == 2)
		{
			arr[m][n] = 9;
			break;
		}

		if ((m == 9 && n == 9) || (arr[m][n + 1] == 1 && arr[m + 1][n] == 1))
			break;


		if (arr[m][n + 1] != 1)
			n++;

		else if (arr[m + 1][n] != 1)
			m++;

	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;

}