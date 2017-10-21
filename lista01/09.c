#include <stdio.h>
#include <stdlib.h>

unsigned int potencia (unsigned int x, unsigned int y){
	if (x == 1) return 1;
	if (y == 0) return 1;
	return x*potencia(x, y-1);
}

int main(){
	unsigned int x, y, result;
	scanf("%d %d",&x, &y);
	result = potencia(x,y);
	printf("%d\n", result);
}
