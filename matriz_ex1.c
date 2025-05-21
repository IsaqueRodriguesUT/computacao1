#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ML 5
#define MC 5

void preencheMatriz(int [ML][MC],int,int);
void transpostaMatriz(int [ML][MC],int [MC][ML],int,int);
void imprimeMatriz(int [ML][MC],int,int);
void imprimeMatrizT(int [MC][ML],int,int);

int main(){

	int m[ML][MC];
	int t[MC][ML];
	
	preencheMatriz(m,ML,MC);
	transpostaMatriz(m,t,ML,MC);
	imprimeMatriz(m,ML,MC);
	printf("-----Transposta-----\n");
	imprimeMatrizT(t,ML,MC);

	return 0;
}

void preencheMatriz(int m[ML][MC],int LINHA,int COLUNA){
	srand(time(NULL));
	for(int i=0;i<LINHA;i++){
		for(int j=0;j<COLUNA;j++){
			m[i][j] =rand()%10 + 1; 
		}
	}
}
void transpostaMatriz(int original[ML][MC],int transposta[MC][ML],int LINHA,int COLUNA){
	for(int i=0;i<LINHA;i++){
		for(int j=0;j<COLUNA;j++){
			transposta[j][i]= original[i][j]; 
		}
	}
}

void imprimeMatriz(int m[ML][MC],int LINHA,int COLUNA){
	for(int i=0;i<LINHA;i++){	
		for(int j=0;j<COLUNA;j++){
			printf("%2d ",m[i][j]);
		}
		printf("\n");
	}
}
void imprimeMatrizT(int t[MC][ML],int LINHA,int COLUNA){
	for(int i=0;i<LINHA;i++){	
		for(int j=0;j<COLUNA;j++){
			printf("%2d ",t[i][j]);
		}
		printf("\n");
	}
}
