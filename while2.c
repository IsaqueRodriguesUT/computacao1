#include <stdio.h>
int main(){
	int n;
	float a,b,c;

	printf("digite o numros de casos que você quer fazer a media: \n");
	scanf("%d",&n);

	for(int i = 0;i < n;i++){
		printf("escreva 3 números para fazer a media: \n");
		scanf("%f %f %f",&a,&b,&c);
		printf("A média é: %.2f\n", (a + b + c)/3);

	}

	
	return 0;
}
