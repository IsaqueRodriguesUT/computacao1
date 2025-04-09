#include <stdio.h>
void entradadados(float *a,float *g,float *ra,float *rg);
void saida(float a, float g, float ra, float rg);

int main(){
	float a,g,ra,rg;
	
	entradadados(&a,&g,&ra,&rg);

	saida(a,g,ra,rg);


	return 0;
}
void entradadados(float *a, float *g, float *ra, float *rg){

	while(1){
		printf("Digite o preço do Alcool(L), da Gasolina(L),rendimento do Alcool(Km/1), e o rendimento da gasolina(Km/1); ");
		if(scanf("%f %f %f %f", a,g,ra,rg) !=4 || *a < 0 || *g < 0 || *ra < 0 || *rg < 0 ){
			printf("Entrada invalida, digite 4 numeros maior que 0. \n");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}
void saida(float a,float g,float ra, float rg){

	float custo_a = a / ra;
	float custo_g = g / rg;

	printf("custo por km do alcool: %.2f, custo por km da gasolina: %.2f \n",custo_a,custo_g);

	if(custo_a < custo_g){
		printf("O Alcool tem uma rendimento maior, abasteça com alcool");
	}
	else if(custo_a > custo_g){
		printf("A Gasolina tem um rendimento maior, abasteça com gasolina");
	}
	else{
		printf("Não a diferença de custo, use Gasolina(Preferência da CTT)");	
	}

}
