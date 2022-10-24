#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int a, d, n,i=1;
	scanf("%d %d %d", &a, &d, &n);
	while (i<n)
	{
		a += d;
		i++;
	}
	printf("%d", a);

	return 0;
}