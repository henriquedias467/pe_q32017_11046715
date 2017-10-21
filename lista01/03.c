#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double gausslegendre(int n){
	float al, a, b, t, p;
	
	a = 1;
	b = (double)1/sqrt(2);
	t = (double)1/4;
	p = 1;
	
	for(int i=0; i<n; i++){
		al = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*pow((a - al),2);
		p = 2*p;
		a = al;
	}
	return (pow((a+b),2))/(4*t);
}

int main(){
	double pi;
	int n;
	n = 25;
	pi = gausslegendre(n);
	printf("%.20lf", pi);
	return 0;
}

