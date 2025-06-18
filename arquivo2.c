#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* arquivo;
    char linha[256];
    float n,soma = 0;

    arquivo = fopen("teste2.txt","r+");
    if(arquivo == NULL){
        printf("Não achei o arquivo");
        return 1;
    }
    printf("---Arquivo Original---\n");
    while (fscanf(arquivo, "%f",&n) != EOF){
        printf("%.2f\n", n);
        soma += n;
    }

    fprintf(arquivo,"%.2f\n",soma);

    fseek(arquivo, 0, SEEK_SET);
    printf("---Arquivo Modificado---\n");
    while (fscanf(arquivo, "%f",&n) != EOF){
        printf("%.2f\n", n);
        soma += n;
    }

    fclose(arquivo);

    return 0;
}
