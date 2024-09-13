#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    printf("Qual é o seu nome?\n> ");
    scanf("%s", nome);
    printf("%s é um programador C!\n", nome);
    int n = strlen(nome);
    printf("%s tem %d letras\n", nome, n);
    return 0;
}