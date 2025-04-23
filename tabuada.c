#include <stdio.h>
int main(){
	int n;

	printf("digite um número:");
	scanf("%d",&n);
	
	printf("---- Tabua Do %d ----",n);
	
	for(int i = 1;i <= 10;i++){
		printf("\n%d x %d= %d",n,i,n*i);
	}


	return 0;
}
