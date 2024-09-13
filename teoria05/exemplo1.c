#include <stdio.h>

int main() {
    char resposta;
    printf("Boa noite! Tudo bem com você?\n> ");
    resposta = getchar();
    printf("Você respondeu %c\n", resposta);
    if (resposta == 'S' || resposta == 's') {
        printf("Que bom! Tomara que continue assim!\n");
    }
    else if (resposta == 'N' || resposta == 'n') {
        printf("Puxa, espero que as coisas melhorem!\n");
    }
    else {
        printf("Não entendi sua resposta!\n");
    }
    return 0;
}