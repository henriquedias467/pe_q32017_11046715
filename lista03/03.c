#include <stdio.h>
#include <stdlib.h>

int somavetor(int a[5], int b[5])
{
	int c[5];
	for(int i=0; i<5; i++){
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int a[5], b[5];
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);
	somavetor(a,b);
	return 0;
}

