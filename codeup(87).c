#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n;
	int s = 0;
	scanf("%d", &n);

	for (int i = 1; ; i++)
	{
		s += i;
		if (s >= n)
			break;
	}
	printf("%d", s);

	return 0;
}
