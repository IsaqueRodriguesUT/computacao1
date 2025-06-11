#include <stdio.h>
#include <string.h>

#define TAM 100
int main(){
	char nomes[3][TAM],nome[TAM];
	int i=0;

	printf("Digite três nomes:\n");
    	for (i = 0; i < 3; i++) {
        	printf("Nome %d: ", i + 1);
        	fgets(nomes[i], TAM, stdin);
        	nomes[i][strcspn(nomes[i], "\n")] = '\0';
	}

	while(1){
		printf("\nDigite um nome: ");
        	fgets(nome, TAM, stdin);
        	nome[strcspn(nome, "\n")] = '\0';	
	
		int encontrado = 0;
        	for (i = 0; i < 3; i++) {
            		if (strcmp(nome, nomes[i]) == 0) {
                		encontrado = 1;
                		break;
            		}
        	}
		if (encontrado) {
            		printf("Este nome está entre os três nomes.\n");
			break;  
        	} else {
            		printf("Este nome não está entre os três nomes.\n");
        	}
    	}
	printf("Fim do progama.");
	return 0;
}
