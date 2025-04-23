#include <stdio.h>
int main(){
	int n;

	while(1){
		printf("\nDigite um número: ");
		if(scanf("%d",&n) != 1){
			printf("\n---Digite um número----");
			while(getchar() != '\n');
		}else{
			break;
		}
		
	}
	
	printf("\n---- Tabua Do %d ----",n);
	
	for(int i = 1;i <= 10;i++){
		printf("\n%d x %d= %d",n,i,n*i);
	}


	return 0;
}
