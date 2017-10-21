#include <stdio.h>
#include <stdlib.h>

int mdc(int n,  int m){
	if (n == 0) return m;
	if (m == 0) return n;
	return mdc(n, m%n);
}

int main(){
	int x, y, result;
	scanf("%d %d", &x, &y);
	result = mdc(x,y);
	printf("%d\n",result);
	return 0;
}
 

