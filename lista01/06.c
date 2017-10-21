#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c){
	return  b*b - (4*a*c);
}

float bhaskara1(float a, float b, float c,float  delta){
	float x1;
	x1 = (sqrt(delta));
	x1 /= 2;
	x1 /= a;
	x1-= (b)/(2*a);
	return x1;
}

float bhaskara2(float a, float b, float c, float delta){
	float x2;
	x2 = ((-1)*b)/(2*a);
	x2 -= (sqrt(delta))/(2*a);
	return x2;
}

int main(){
	float a, b, c, delt, x1, x2;
	scanf("%f %f %f", &a, &b, &c);
	delt = delta(a, b, c);
	if(delt>=0){
		x1 = bhaskara1(a,b,c,delt);
		x2 = bhaskara2(a,b,c,delt);
		printf("%.2f %.2f", x1, x2);
	}
	else {
		x1 = -b/(2*a);
		delt = (-1)*delt;
		delt = sqrt(delt)/(2*a);
		printf("%.2f+%.2fi %.2f-%.2fi", x1, delt, x1, delt);
	}
	return 0;
}

		
		
	
