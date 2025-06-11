#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

void gerar_abreviatura(char *nome, char *abreviatura) {
    int i = 0;
    int j = 0;
    int n = strlen(nome);
    
    while (i < n) {

        while (i < n && nome[i] == ' ') {
            i++;
        }

        if (i >= n) {
            break;
        }


        int start = i;
        while (i < n && nome[i] != ' ') {
            i++;
        }

        int word_len = i - start;
        if (word_len > 2) {
            abreviatura[j++] = toupper(nome[start]);  
            abreviatura[j++] = '.';                   
        } else {

            for (int k = start; k < i; k++) {
                abreviatura[j++] = nome[k];
            }
            abreviatura[j++] = ' ';
        }
    }
    if (abreviatura[j - 1] == ' ') {
        abreviatura[j - 1] = '\0';
    } else {
        abreviatura[j] = '\0';
    }
}

int main() {
    char nome[MAX], abreviatura[MAX] = "";

    printf("Digite o nome completo: ");
    fgets(nome, MAX, stdin);
    nome[strcspn(nome, "\n")] = '\0';  

    gerar_abreviatura(nome, abreviatura);

    printf("Abreviatura: %s\n", abreviatura);

    return 0;
}
