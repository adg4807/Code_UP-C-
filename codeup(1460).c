#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int num;
	int i, j, n = 1;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			arr[i][j] = i + n;
			printf("%d ", arr[i][j]);
			n++;
		}
		n--;

		printf("\n");
	}

	return 0;
}