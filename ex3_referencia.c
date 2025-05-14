#include <stdio.h>

void converteHora(int total,int* hora,int* min,int* seg);

int main(){
	int total,hora,min,seg;

	printf("DIgite o total de segundos: ");
	scanf("%d",&total);

	converteHora(total,&hora,&min,&seg);
	printf("%02d:%02d:%02d",hora,min,seg);

	return 0;
}
void converteHora(int total, int* hora,int* min,int* seg){
	*hora = total / 3600;
	*min = (total % 3600)/60;
	*seg = total % 60;
}
