#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fahrcel(int T){
	float celsius;
	celsius = T-32;
	celsius /= 1.8;
	return celsius;
}

float celfahr(int T){
	float fahrenheit;
	fahrenheit = (float)1.8*T+32;
	return fahrenheit;
}

float celkel(float T){
	float kelvin;
	kelvin = T + 273;
	return kelvin;
}

float kelcel(int T){
	float celsius;
	celsius = T-273;
	return celsius;
}
float fahrkel(int T){
	float kelvin;
	kelvin = 5*T - 160;
	kelvin /= 9;
	kelvin += 273;
	return kelvin;
}

float kelfahr(int T){
	float fahrenheit;
	fahrenheit = 9*T -2457;
	fahrenheit /= 5;
	fahrenheit += 32;
	return fahrenheit;
}

int decbin(int x){
	if(x<2) return x;
	return (10*decbin(x/2))+x%2;
}

int bindec(int x, int i){
	
	if(x==0) return 0;
	i++;
	return (x%10)*pow(2,i) + bindec(x/10,i);
	
}


int main(){
	float temperatura;
	int x, t, e, s,i, numero;
	i = -1;
	
	scanf("%d %d %d %d", &t, &e, &s, &x);
	if(t == 1){
		if(e == 1){
			if(s == 1){
					temperatura = (float)(x);
					printf("%.2f C\n", temperatura);
			}
			if(s == 2){
					temperatura = celfahr(x);
					printf("%.2f F\n", temperatura);
			}
			if(s == 3){
					temperatura = celkel(x);
					printf("%.2f K\n", temperatura);
			}
		}
		if(e == 2){
			if(s == 1){
					temperatura = fahrcel(x);
					printf("%.2f C\n", temperatura);
			}
			if(s == 2){
					temperatura = (float)(x);
					printf("%.2f F\n", temperatura);
			}
			if(s == 3){
					temperatura = fahrkel(x);
					printf("%.2f K\n", temperatura);
			}
		}
		if(e == 3){
			if(s == 1){
					temperatura = kelcel(x);
					printf("%.2f C\n", temperatura);
			}
			if(s == 2){
					temperatura = kelfahr(x);
					printf("%.2f F\n", temperatura);
			}
			if(s == 3){
					temperatura = (float)(x);
					printf("%.2f K\n", temperatura);
			}
		}
		
	}
	if(t == 2){
		
		if(e == 1){
			if(s == 1) numero = x;
			if(s == 2) numero =  decbin(x);
			printf("%d", numero);
		}
		if(e == 2){
			if(s == 1) numero = bindec(x,i);
			if(s == 2) numero = x;
		
	printf("%d", numero);
		}
	}
	return 0;
	
}
				
		
		 
	
