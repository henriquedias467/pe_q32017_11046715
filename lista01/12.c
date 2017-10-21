#include <stdio.h>
#include <stdlib.h>



float binomial(unsigned int n,unsigned int k){
	if (n == k) return 1;
	if (n == 0) return 1;
	return (k+1)*binomial(n, k+1)/(n-k);// Relacao de Fermat

}

int main(){
	unsigned int n, k;
	float result;
	scanf("%d %d", &n, &k);
	result = binomial(n,k);
	printf("%f\n", result);
	return 0;
}

	

