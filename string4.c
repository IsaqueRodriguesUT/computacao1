#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

void gerar_abreviatura(char *nome, char *abreviatura) {
    char *token = strtok(nome, " ");
    
    while (token != NULL) {
        if (strlen(token) > 2) {
            strncat(abreviatura, token, 1);
            strcat(abreviatura, ". ");
        } else {
            strcat(abreviatura, token);
            strcat(abreviatura, " ");
        }
        token = strtok(NULL, " ");
    }
    
    // Remove o último espaço extra
    if (abreviatura[strlen(abreviatura) - 1] == ' ') {
        abreviatura[strlen(abreviatura) - 1] = '\0';
    }
}

int main() {
    char nome[MAX], abreviatura[MAX] = "";

    printf("Digite o nome completo: ");
    fgets(nome, MAX, stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o \n da entrada

    gerar_abreviatura(nome, abreviatura);

    printf("Abreviatura: %s\n", abreviatura);

    return 0;
}
