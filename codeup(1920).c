#include <stdio.h>
#pragma warning(disable : 4996)


int f(int n)
{
	if (n < 1)
		return ;
	f(n / 2);
	printf("%d", n % 2);

}

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	if (num > 0)
		f(num);
	else
		printf("0");

	return 0;
}