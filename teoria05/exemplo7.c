#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    printf("Qual é o seu nome completo?\n> ");
    fgets(nome, 20, stdin);
    int n = strlen(nome);
    nome[n-1] = '\0';
    n = strlen(nome);
    printf("%s é um programador C!\n", nome);
    printf("%s tem %d letras\n", nome, n);
    return 0;
}