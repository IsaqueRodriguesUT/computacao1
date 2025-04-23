#include <stdio.h>

void entrada(int *f_p,int *n_ar,float *m_c);
void saida(int f_p,int n_ar,float m_c);

int main(){
	int f_p,n_ar;
	float m_c;

	entrada(&f_p,&n_ar,&m_c);
	saida(f_p,n_ar,m_c);

	return 0;
}

void entrada(int *f_p,int *n_ar,float *m_c){
	while(1){
		printf("\nForça do personagem(inteiro de 1 a 100):\nNível de arma(inteiro de 1 a 50):\nmultiplicador de crítico(real de 1.0 a 2.0):");
		if(scanf("%d %d %f",f_p,n_ar,m_c) !=3 || *f_p < 1 || *f_p > 100 || *n_ar < 1 || *n_ar > 50 || *m_c < 1.0 || *m_c > 2.0){
			printf("-----Digite oque esta pedindo respeitando os parenteses!!-----");
			while(getchar() != '\n');
		}else{
			break;
		}
	}
}

void saida(int f_p,int n_ar,float m_c){
	float dano = f_p * n_ar * m_c;
	
	if(dano > 5000){
		printf("DANO CRÍTICO MASSIVO!");
	}
	else if(dano >= 1000){
		printf("DANO CRÍTICO!");
	}
	else{
		printf("Dano normal");
	}
	printf("\nDano: %.2f",dano);


}

