/*
#include <stdio.h>
#pragma warning(disable : 4996)

int n, d[110];

int f()
{
    int i = 0,max=0;
    
    for (i = 0; i < n; i++)
        if (d[i] > d[max])
            max = i;

	return max + 1;

}


int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    printf("%d", f());
    return 0;
}
*/