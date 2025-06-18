#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* arquivo_entrada,*arquivo_saida;
    char linha[256];
    int n_linha= 1;

    arquivo_entrada = fopen("teste1.txt","r");
    if(arquivo_entrada == NULL){
        printf("Não achei o arquivo");
        return 1;
    }

    arquivo_saida = fopen("teste1_.txt","w+");
    if(arquivo_saida == NULL){
        printf("Não achei o arquivo");
        return 1;
    }

    printf("---Arquivo original---\n");
    while(fgets(linha, sizeof(linha),arquivo_entrada) != NULL){
    printf("%s",linha);
        fprintf(arquivo_saida,"%d- %s",n_linha, linha);
        n_linha ++;
    }

    fseek(arquivo_saida, 0,SEEK_SET);

    printf("---Arquivo modificado---\n");
    while (fgets(linha, sizeof(linha), arquivo_saida) != NULL){
        printf("%s",linha);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    return 0;
}
