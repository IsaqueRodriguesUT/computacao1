#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5

void preenche(int vet[]){
	for(int i = 0;i<100;i++){
		vet[i]=i;
	}
}
void embaralhar(int vet[],int n){
	for(int i = n -1;i>0;i--){
		int j = rand() % (i+1);

		int temp = vet[i];
		vet[i] = vet[j];
		vet[j] = temp;
	}
}
void preencheBingo(int vet[][TAM],int numeros[],int n){
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			vet[i][j] = numeros[k++];
		}
	}
}
void imprime(int vet[][TAM],int n){
	printf("-----Cartela do bingo-----");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%2d ",vet[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int numeros[100],bingo[TAM][TAM];
	srand(time(NULL));

	preenche(numeros);
	embaralhar(numeros,100);
	preencheBingo(bingo,numeros,TAM);
	imprime(bingo,TAM);


	return 0;
}


