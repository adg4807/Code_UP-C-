
//code up_1075
#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	while (num != 0)
		printf("%d\n", --num);

	return 0;
}
