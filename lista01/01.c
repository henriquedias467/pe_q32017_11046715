#include <stdio.h>
#include <stdlib.h>

int parimpar(unsigned int x){
	if(x%2==0) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(){
	int x, y;
	scanf("%d",&x);
	
	y = parimpar(x);
	printf("%d \n",y);
	return 0;
}

	
