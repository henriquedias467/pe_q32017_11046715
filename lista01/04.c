#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(float a, float b){
	return a+b;
}

float subtracao(float a, float b){
	return a-b;
}

float multiplicacao(float a, float b){
	return a*b;
}

float divisao(float a, float b){
	return a/b;
}

float potenciacao(float a, float  b){
	return pow(a, b);
}

int main(){
	float a, b, result;
	unsigned int o; 
	scanf("%o %f %f", &o, &a, &b);
	if(o==1) result = soma(a,b);
	if(o==2) result = subtracao(a,b);
	if(o==3) result = multiplicacao(a,b);
	if(o==4) result = divisao(a,b);
	if(o==5) result = potenciacao(a,b);
	printf("%.f", result);
	return 0;
}
