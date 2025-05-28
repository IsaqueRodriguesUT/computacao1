#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void menu(int* opcao){
	printf("=======================\n");
	printf("(0)Criar Duas Raizes %d X %d com valores inteiro\n",TAM,TAM);
	printf("(1)Imprimir matrizes\n");
	printf("(2)Somar as duas matrizes\n");
	printf("(3)Subtrair as duas matrizes\n");
	printf("(4)Multiplicar x à primeira matriz\n");
	printf("(9)SAIR!\n");
	printf("=======================\n");
	scanf("%d", opcao);
}
void criarRaizes(int A[][TAM],int B[][TAM],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			A[i][j]= rand() % 101;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			B[i][j]= rand() % 101;
		}
	}
}
void output(int A[][TAM],int B[][TAM],int n){
	printf("======Matriz A======");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",A[i][j]);
		}
		printf("\n");
	}	
	printf("======Matriz B======\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",B[i][j]);
		}
		printf("\n");
	}
}
void soma(int A[][TAM],int B[][TAM],int n){
	printf("======Matriz A======\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int opcao,matrizA[TAM][TAM],matrizB[TAM][TAM];
	
	srand(time(NULL));

	do{
		menu(&opcao);
		switch(opcao){
			case 0:
				criarRaizes(matrizA,matrizB,TAM);
				printf("\n");
				break;

			case 1:
				output(matrizA,matrizB,TAM);
 				printf("\n");
				break;

			case 2:
				soma(matrizA,matrizB,TAM);
				printf("\n");
				break;

			case 9:


		}
		
	}while(opcao != 9);

	return 0;
}
