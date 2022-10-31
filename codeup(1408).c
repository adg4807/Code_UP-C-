#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	char pa[20];
	char p2[20];
	int i = 0;
	
	scanf("%s", pa);

	while (pa[i]!=NULL)
	{
		p2[i] = pa[i] + 2;
		printf("%c", p2[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (pa[i]!=NULL)
	{
		pa[i] = (pa[i] * 7) % 80 + 48;
		printf("%c", pa[i]);
		i++;
	}

	return 0;
}
