#include <stdio.h>
int main(){
	int n=0,v_p=0;
	float soma_p=0;

	while(n != -1000){
		while(1){
			printf("Digite um número inteiro diferente de -1000\n");
				if(scanf("%d",&n) != 1){
					printf("Digite um número inteiro!!\n");
					while(getchar() != '\n');
				}else{
					break;
				}
		}
		if(n > 0){
			v_p++;
			soma_p += n;
		}
		printf("Números positivos digitados: %d \n", v_p);
	}
	printf("Média do valores positivos: %.1f\n", soma_p / v_p);





	return 0;
}
