#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int verifica(int vetor[],int tam,int valor);

int main(){
	
	int vetor[TAM];
	int i,valor;
		
	srand(time(NULL));

	for(i=0;i<TAM;i++){
		vetor[i] = rand() %100 +1;
	}

	printf("Valores do vetor preenchido com números aleatorios: ");
		for(i=0;i<TAM;i++){
			printf("%d ",vetor[i]);
		}
	printf("\n");

	do{
		printf("Digite um valor para inserir no vetor: ");
		scanf("%d",&valor);

		if(verifica(vetor,TAM,valor)){
			printf("O valor %d ja existe no vetor, digite outro valor.\n",valor);
		}
	}while(verifica(vetor,TAM,valor));

	vetor[TAM - 1] = valor;

	printf("-----Novo Vetor----\nVetor: ");
	for(i=0;i<TAM;i++){
		printf("%d ",vetor[i]);
	}


	return 0;
}

int verifica(int vetor[],int tam,int valor){
	for(int i = 0;i < tam;i++){
		if(vetor[i] == valor){
			return 1;
		}
	}
	return 0;
}


