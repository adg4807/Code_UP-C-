#include <stdio.h>

int arr_n[10000001]={0};

int main(void)
{
	int n, m;
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
		printf("%d ", arr_n[num]);
	}
	return 0;
}
