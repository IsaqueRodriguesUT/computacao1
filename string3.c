#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int eh_vogal(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void gerar_senha(char *nome, char *bairro, char *senha) {
    while (*nome != '\0') {
        if (eh_vogal(*nome)) {
            strncat(senha, nome, 1);
        }
        nome++;
    }

    while (*bairro != '\0') {
        if (eh_vogal(*bairro)) {
            strncat(senha, bairro, 1);
        }
        bairro++;
    }
}

int main() {
    char nome[MAX], bairro[MAX], senha[MAX] = "";

    printf("Digite o nome: ");
    fgets(nome, MAX, stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o \n da entrada

    printf("Digite o bairro: ");
    fgets(bairro, MAX, stdin);
    bairro[strcspn(bairro, "\n")] = '\0';  // Remove o \n da entrada

    gerar_senha(nome, bairro, senha);

    printf("Senha gerada: %s\n", senha);

    return 0;
}

