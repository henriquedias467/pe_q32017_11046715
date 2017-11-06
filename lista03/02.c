#include <stdio.h>
#include <stdlib.h>

char inverte(char s[], int n)
{
	char resposta[n];
	for(int i=0; i<n; i++){
		resposta[i] = s[n-1-i];
		printf("%c", resposta[i]);
	}
	printf("\n");
}

int lenght(char s[])
{
	int i = 0;
	while(s[i]!='\0') i++;
	return i;
}

int main()
{
	int n;
	char entrada[255];
	fgets(entrada, 255, stdin);
	n = lenght(entrada);
	printf("%d\n", n);
	inverte(entrada, n);
	
	return 0;
}
	
		
