#include <stdio.h>

void entrada(int *base,int *ini,int *fim);
int soma(int base,int ini,int fim);
void saida(int base,int ini,int fim);

int main(){
	int base=0,ini=0,fim=0;

	entrada(&base,&ini,&fim);
	saida(base,ini,fim);
	

	return 0;
}

void entrada(int *base,int *ini,int *fim){
	while(1){
		printf("Digite um número base(número inteiro):\n");
		printf("Digite o valor inicial do intervalo:\n");
		printf("Digite o valor final do intervalo\n");
		if(scanf("%d %d %d",base,ini,fim) !=3 || *base <= 0|| *ini <= 0 || *fim <=0){
			printf("Digite um número inteiro maior que 0: ");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}
int soma(int base,int ini, int fim){
	int soma = 0;
	for(int i = ini;i <= fim; i++){
		if(i % base == 0){
			soma += i;
		}
	}
	return soma;
}
void saida(int base,int ini,int fim){
	int result = soma(base,ini,fim);
	printf("\nA soma dos multiplos de %d no intervalo (%d,%d) é igual a: %d\n",base,ini,fim,result);
}

