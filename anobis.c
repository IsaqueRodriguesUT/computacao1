#include <stdio.h>
int anoBissexto(int i);
int main(){
	for(int i = 2000; i <= 2500;i++){
		if(anoBissexto(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}
int anoBissexto(int i){
	if( i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
		return 1;
	}else{
		return 0;
	}

}
