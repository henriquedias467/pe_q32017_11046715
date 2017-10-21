#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y){
	if(y==0) return 1;
	if(x==1) return 1;
	return x*potencia(x,(y-1));
}

int decbin(int x){
	if(x<2) return x;
	return (10*decbin(x/2))+x%2;
}

int bindec(int x, int i){
	
	if(x==0) return 0;
	i++;
	return (x%10)*potencia(2,i) + bindec(x/10,i);
	
}
	

int main(){
	int n, r ,i ,x;
	i = -1;
	scanf("%d %d", &x, &n);
	if(n==2) r = bindec(x,i);
	if(n==1) r = decbin(x);
	printf("%d", r);
	return 0;
}
