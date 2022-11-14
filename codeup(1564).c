#include <stdio.h>
int a, b;

int gcd(int a, int b)
{
	if (a>b)
	{
		while (1)
		{
			int r = a % b;
			if (r == 0)
				return b;

			a = b;
			b = r;
		}
	}
	else
	{
		while (1)
		{
			int r = b % a;
			if (r == 0)
				return a;

			b = a;
			a = r;
		}
	}
}

int main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}
