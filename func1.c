#include <stdio.h>
#include <math.h>
void entrada(float *n);
int arredonda (float x);

int main(){
	float n;
	entrada(&n);
	printf("Número arredondado: %d",arredonda(n));

	return 0;
}

void entrada(float *n){
	while(1){
		printf("Digite o valor a ser arredondado: ");
		if(scanf("%f",n) != 1){
			printf("Digite um número!!");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}
int arredonda(float x){
	return (int)round(x);
}
