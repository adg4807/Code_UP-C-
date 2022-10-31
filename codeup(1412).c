#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	char eng[91];

	gets(eng);

	for (int i = 97; i <=122; i++)
	{
		int num = 0;
		for (int j = 0; eng[j]!='\0'; j++)
		{
			if (eng[j]==i)
			{
				num++;
			}
		}
		printf("%c:%d\n",i,num);
	}

	return 0;
}