#include <stdio.h>
#include <string.h>

int main() {
    char nome[20] = "Lucas";
    int n = strlen(nome);
    printf("%s é um programador C!\n", nome);
    printf("%s tem %d letras\n", nome, n);
    // nome = "Lucas Santacruz"; // não funciona
    strcpy(nome, "Lucas Santacruz");
    n = strlen(nome);
    printf("%s é um programador C!\n", nome);
    printf("%s tem %d letras\n", nome, n);    
    return 0;
}