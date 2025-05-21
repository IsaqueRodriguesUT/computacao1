#include <stdio.h>

#define N 8

void pascal(int [N][N],int);
void imprime(int [N][N],int);

int main(){
	int m [N][N] ={0};

	pascal(m,N);
	imprime(m,N);

	return 0;
}

void pascal(int m[N][N],int n){

	for(int i = 0;i<n;i++){
		m[i][0]= 1;
		m[i][i] = 1;

		for(int j = 1;j<i;j++){
			m[i][j] =m[i-1][j-1] + m[i-1][j];
		}
	}
}
void imprime(int m[N][N],int n){
	for(int i =0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%3d " ,m[i][j]);
		}
		printf("\n");
	}
}
