#include <stdio.h>

int main(void)
{
	int n, m;
	int arr_n[10000000];
	int num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{

		scanf("%d", &num);
		arr_n[num] = 1;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{

		scanf("%d", &num);
		printf("%d", arr_n[num]);
	}


	return 0;
}