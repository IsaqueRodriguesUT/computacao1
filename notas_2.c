#include <stdio.h>
int main() 
{
	float n1,n2,n3,media,freq;

	printf("Digite as três notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	printf("Digite a frequência(0 a 100): "); 
	scanf("%f", &freq);

	media = (n1 + n2 + n3 ) / 3;

	if (media > 8 && freq >= 75.0){
		printf("Aprovado com Distinção, pois teve media: %.2f e frequencia: %.0f%% ", media, freq);
	}
	else if(media >=6 && freq >= 75){
		printf("Aprovado direto, pois teve media: %.2f e frequencia: %.0f%% ", media, freq);
	}
	else if(media >= 4 && media < 6 && freq >= 75 || media >= 60 && freq < 75 || media >= 4 && freq > 50 && freq < 75){
		printf("Vai para final, pois teve media: %.2f e frequencia: %.0f%% ", media, freq);
	}
	else{
		printf("Reprovado Direto , pois teve media: %.2f e frequencia: %.0f%% ", media, freq);
	}
		
	return 0;
}

