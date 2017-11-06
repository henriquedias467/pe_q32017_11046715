#include <stdio.h>
#include <stdlib.h>

int vogais(char s[255], int n)
{
	int contador = 0;
	for(int i=0; i<n; i++){
		if(s[i] =='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			contador ++;
		}
	}
	return contador;
}

int lenght(char s[])
{
	int i = 0;
	while(s[i]!='\0') i++;
	return i;
}
	 
int main()
{
	char entrada[255];
	int resultado, n;
	fgets(entrada,255, stdin);
	n = lenght(entrada);
	resultado = vogais(entrada, n);
	printf("%d\n", resultado);
	return 0;
}
