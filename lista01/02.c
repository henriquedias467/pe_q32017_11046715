#include <stdio.h>
#include <stdlib.h>

float volume( float l,  float c,  float h){
	return l*c*h;
}

int main(){
	float l, c, h, vol;
	scanf("%f %f %f", &l, &c, &h);
	vol = volume(l, c, h);
	printf("%.2f", vol);
	return 0;
}
