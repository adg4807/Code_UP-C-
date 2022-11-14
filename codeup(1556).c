#include <stdio.h>
#pragma warning(disable : 4996)
int n;

int f(int num)
{
	if (num == 1)
		return;
	return num * f(num - 1);

}
int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}
