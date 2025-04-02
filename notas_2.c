#include <stdio.h>
int main() 
{
	float n1,n2,n3,media,freq;

	printf("Digite as três notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	printf("Digite a frequência(0 a 100): "); 
	scanf("%f", freq);

	media = (n1 + n2 +n2) / 3;

	if (media > 8){
		printf("Aprovado com Distinção");
	}
	else if(media >=6){
		printf("Aprovado direto");
	}
	else if(media >= 4){
		printf("Vai para final");
	}
	else{
		printf("Reprovado Direto ");
	}
		
	return 0;
}

