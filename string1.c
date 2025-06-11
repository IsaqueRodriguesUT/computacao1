#include <stdio.h>
#include <string.h>
#include <ctype.h>

void imprime(char vogal,int contagem){
	printf("%c : ",vogal);
	for(int j=0;j<contagem; j++){
		printf("*");
	}
	printf("(%d)\n",contagem);

}

int main(){
	char frase[200];
	int a=0, e=0, i=0, o=0, u=0;

	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);

	for(int j=0; frase[j] 	!='\0';j++){

		char c = tolower(frase[j]);

		if(c == 'a'){
			a++;
		}
		else if(c == 'e'){
			e++;
		}
		else if(c == 'i'){
			i++;
		}
		else if(c == 'o'){
			o++;
		}
		else if(c == 'u'){
			u++;
		}
	}

	imprime('a',a);
	imprime('e',e);
	imprime('i',i);
	imprime('o',o);
	imprime('u',u);

	return 0;
}
