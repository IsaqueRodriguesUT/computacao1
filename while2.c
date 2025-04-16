#include <stdio.h>
int main(){
	int n;
	float a,b,c,media;

	printf("Digite o números de casos que você quer fazer a média: \n");
	scanf("%d",&n);

	for(int i = 0;i < n;i++){
		printf("Escreva 3 números para fazer a media: \n");
		scanf("%f %f %f",&a,&b,&c);
		media = (a*2)+(b*3)+(c*5) / (2+3+5);
		printf("A média é: %.2f\n", media);

	}

	
	return 0;
}
