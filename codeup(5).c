#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	char n[101]="";
	fgets(n,101,stdin);
	printf("%s", n);
	
	return 0;
}