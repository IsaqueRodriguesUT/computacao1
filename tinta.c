#include <stdio.h>
#include <math.h>

void entrada(float *alt,float *larg);
void saida(float area, float tinta);

int main(){
	float alt,larg,area,tinta;

	entrada(&alt,&larg);

	area = alt * larg;
	tinta = area / 2;
	
	saida(area,tinta);

	return 0;
}

void entrada(float *alt, float *larg){
	while(1){
		printf("Digite a altura e largura da parede que deseja calcular a tinta necessaria para pinta-la: \n");
		if(scanf("%f %f", alt, larg) !=2 || *alt <= 0 || *larg <= 0){
			printf("Digite um número maior que 0: \n");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}

void saida(float area, float tinta){
	printf("Área da parede: %.2f\nQuantidade de tinta Necessaria: %.0f\n",area, ceil(tinta));
}


