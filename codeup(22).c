#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	char n[2000] = "";
	fgets(n, 2000, stdin);
	printf("%s", n);

	return 0;
}
