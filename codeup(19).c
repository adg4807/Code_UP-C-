#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int n, m, k;
	scanf("%d.%d.%d", &n, &m, &k);
	printf("%04d.%02d.%02d", n, m, k);

	return 0;
}
