#include <stdio.h>
int main() 
{
	float n1,n2,n3,media;

	printf("Sigite as três notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);

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

