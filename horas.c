#include <stdio.h>
int main ()
{

	int hora, min,seg;
	float aux = 5.5;

	printf("Digite, Horas, Minutos e Segundos: ");
	scanf("%d %d %d", &hora,&min,&seg);

	if (hora > 1 && min > 15)
	{
		printf("Quantidase  de segundos: %d \n", (hora * 60 * 60 + min * 60 + seg));

	}else{
		printf("Quantidade de minutos: %d \n", hora * 60 + min);
	}

	printf("Horario: %02d:%02d:%02d\n", hora,min,seg);
	printf("Float com duas casas: %.2f\n", aux);

	return 0;
}

