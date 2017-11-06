#include <stdio.h>
#include <stdlib.h>

void imprime(int M[3][3])
{
        for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                        printf("%d ", M[i][j]);
                }
                printf("\n");
        }
}


int transposta(int M[3][3])
{
	int H[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			H[i][j]=M[j][i];
		}
		
	}
	imprime(H);
	return 0;
	
}

int main()
{
	int M[3][3];
	scanf("%d %d %d", &M[0][0], &M[0][1], &M[0][2]);
	scanf("%d %d %d", &M[1][0], &M[1][1], &M[1][2]);
	scanf("%d %d %d", &M[2][0], &M[2][1], &M[2][2]);
	transposta(M);
	return 0;
}

	 	
