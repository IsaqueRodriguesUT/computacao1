#include<stdio.h>
#include<stdlib.h>

#define T 3

int main(){
    FILE *arquivo;
    float vetor[T],n;
    int i =0;

    arquivo = fopen("valores.txt","w");
    if(arquivo == NULL){
        printf("não acheio o arquivo");
        return 1;
    }

    for(int i =0; i<T ;i++){
    printf("Digite o %d numero real: ",i+1);
    scanf("%f",&n);

    fprintf(arquivo,"%.2f\n",n);

    }

    fclose(arquivo);

    arquivo = fopen("valores.txt","r");
    if(arquivo == NULL){
        printf("não acheio o arquivo");
        return 1;
    }

    while (fscanf(arquivo, "%f",&n) != EOF){

    }
    fclose(arquivo);


    return 0;
}
