#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int n, m;
	scanf("%d-%d", &n, &m);
	printf("%06d%06d", n, m);

	return 0;
}
