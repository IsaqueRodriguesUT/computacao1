#include <stdio.h>
int main(){

	int m_valor = 0,n = 0;

	while(n >= 0){
		while(1){
			printf("Digite um número inteiro positivo: \n");
			if(scanf("%d", &n) != 1){
				printf("Digite um número inteiro!!\n");
				while(getchar() != '\n');
			}else{
				break;
			}
		}
		if(n > m_valor){
			m_valor = n;
		}

	}
	printf("O maior numero positivo digitado foi: %d", m_valor);

	return 0;
}
