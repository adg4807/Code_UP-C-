#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	scanf("%d", &num);

	while (num != 0)
		printf("%d\n", --num);


	return 0;
}