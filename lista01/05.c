#include <stdio.h>
#include <stdlib.h>

int fatorial(int a){
	if(a==0){
		return 1;
	}
	if(a == 1) {
		return 1;
	}
	return a*fatorial(a-1);
}

float binomial(int n, int k){
	float binomial;
	binomial = fatorial(n);
	binomial /= fatorial(k);
	binomial /= fatorial(n-k);
	return binomial;
}

int main(){
	int a, b;
	float result;
	scanf("%d %d", &a, &b);
	result = binomial(a,b);
	printf("%.f\n", result);
	return 0;
}

