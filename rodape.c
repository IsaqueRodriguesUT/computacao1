#include <stdio.h>
void entrada(float *base,float *alt);
void saida(float base, float alt);

int main(){
	float base,alt;

	entrada(&base,&alt);
	saida(base,alt);

	return 0;
}
void entrada(float *base,float *alt){
	while(1){
		printf("Digite a base e altura: ");
		if(scanf("%f %f",base,alt) != 2 || *base <= 0 || *alt<= 0){
			printf("\nDigite um número maio que 0: ");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}
void saida(float base,float alt){
	float perimetro,area,rodape,porta = 0.8;
	perimetro = (base * 2) + (alt * 2);
	area = base * alt;
	rodape = perimetro - porta;

	printf("\nPerimetro total: %.2f\nQuantidade necessaria de rodape: %.2f\nÁrea do quarto: %0.2f\n",perimetro,rodape,area);

}
