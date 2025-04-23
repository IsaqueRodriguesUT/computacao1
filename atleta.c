#include <stdio.h>

void entrada (int *dis,int *m_percorrido,int *s_percorrido);
void calc(int dis,int m_percorrido,int s_percorrido, int *m_ritmo,int *s_ritmo);

int main(){
	int dis,m_percorrido,s_percorrido,m_ritmo,s_ritmo;
	
	entrada(&dis,&m_percorrido,&s_percorrido);
	calc(dis,m_percorrido,s_percorrido,&m_ritmo,&s_ritmo);
	
	printf("Ritmo: %d:%02d",m_ritmo,s_ritmo);

	return 0;
}
void entrada (int *dis,int *m_percorrido,int *s_percorrido){
	while(1){
		printf("Digite a distancia percorrida(número inteiro):\nEm quantos minutos você percorreu:\nEm quantos segundos você percorreu:\n");
		if(scanf("%d %d %d",dis,m_percorrido,s_percorrido) != 3 || dis <= 0 || m_percorrido < 0 || s_percorrido < 0){
			printf("Digite números inteiros, e o tempo percorrido não pode ser menor que 0\n");
			while(getchar() !='\n');
		}else{
			break;
		}
	}
}

void calc(int dis,int m_percorrido,int s_percorrido,int *m_ritmo,int *s_ritmo){
	int tts;

	tts = m_percorrido * 60 + s_percorrido;
	
	int t_ritmo = tts / dis;
	
	*m_ritmo = t_ritmo / 60;
	*s_ritmo = t_ritmo % 60;

}
