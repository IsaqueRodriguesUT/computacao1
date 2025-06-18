    #include<stdio.h>
    #include<stdlib.h>

    int main(){
        FILE* arquivo;
        char linha[256];

        arquivo = fopen("teste1.txt","r+");
        if(arquivo == NULL){
            printf("Não achei o arquivo");
            return 1;
        }
        printf("---Arquivo Original---");
        while (fgets(linha, sizeof(linha), arquivo) != NULL){
            printf("%s",linha);
        }


        fputs("Carlos, Rua Amaral, São José, SC, Brasil\n", arquivo);
        fputs("Isaque, Rua Amaral, São José, SC, Brasil\n", arquivo);

        fseek(arquivo, 0, SEEK_SET);

        printf("---Arquivo Modificado---");
        while (fgets(linha, sizeof(linha), arquivo) != NULL){
            printf("%s",linha);
        }

        fclose(arquivo);

        return 0;
    }
