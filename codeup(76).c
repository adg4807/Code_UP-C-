#include <stdio.h>
#pragma warning(disable : 4996)


int main(void)
{
	char n, c = 'a';
	scanf("%c", &n);

	do
	{
		printf("%c ", c++);
	} while (c < n + 1);

	return 0;
}