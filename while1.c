#include <stdio.h>
int main(){
	int n, x;
	int i = 1;

	printf("Escreva um numero: ");
	scanf("%d",&n);

	while(i <= 100){
		x = i % n;
		if(x == 2){
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
