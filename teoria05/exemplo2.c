#include <stdio.h>

int main() {
    char resposta;
    printf("Boa noite! Digite um caractere: > ");
    resposta = getchar();
    printf("Você digitou %c\n", resposta);
    if (resposta == 1) {
        printf("1 e '%c' são iguais!\n", resposta);
    }
    else {
        printf("1 e '%c' são diferentes!\n", resposta);
    }
    if (resposta == 65) {
        printf("65 e '%c' são iguais!\n", resposta);
    }
    else {
        printf("65 e '%c' são diferentes!\n", resposta);
    }
    return 0;
}