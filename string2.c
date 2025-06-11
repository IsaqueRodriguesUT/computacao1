#include <stdio.h>
#include <string.h>

#define MAX 1000

void intercalar(char *frase1, char *frase2, char *resultado) {
    char *p1 = frase1;
    char *p2 = frase2;
    char temp[MAX];
    int i = 0, j = 0;
    
    while (*p1 != '\0' && *p2 != '\0') {
        while (*p1 != ' ' && *p1 != '\0') {
            temp[i++] = *p1++;
        }
        temp[i] = '\0';
        strcat(resultado, temp);
        strcat(resultado, " ");
        i = 0;
        
        while (*p2 != ' ' && *p2 != '\0') {
            temp[i++] = *p2++;
        }
        temp[i] = '\0';
        strcat(resultado, temp);
        strcat(resultado, " ");
        i = 0;

        if (*p1 == ' ') p1++;
        if (*p2 == ' ') p2++;
    }

    while (*p1 != '\0') {
        while (*p1 != ' ' && *p1 != '\0') {
            temp[i++] = *p1++;
        }
        temp[i] = '\0';
        strcat(resultado, temp);
        strcat(resultado, " ");
        i = 0;

        if (*p1 == ' ') p1++;
    }

    while (*p2 != '\0') {
        while (*p2 != ' ' && *p2 != '\0') {
            temp[i++] = *p2++;
        }
        temp[i] = '\0';
        strcat(resultado, temp);
        strcat(resultado, " ");
        i = 0;

        if (*p2 == ' ') p2++;
    }
}

int main() {
    char frase1[MAX], frase2[MAX], resultado[MAX] = "";

    printf("Digite a primeira frase: ");
    fgets(frase1, MAX, stdin);
    frase1[strcspn(frase1, "\n")] = '\0';

    printf("Digite a segunda frase: ");
    fgets(frase2, MAX, stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    intercalar(frase1, frase2, resultado);

    printf("Resultado da intercalação: %s\n", resultado);

    return 0;
}
