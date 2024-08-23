#include <stdio.h>

int main(){
    int nota;
    printf("Digite uma nota de 1 a 10: ");
    scanf("%d", &nota);
    char conceito;
    conceito = nota < 2 ? 'E' : nota < 4 ? 'D' : nota < 6 ? 'C' : nota < 8 ? 'B' : 'A';
    printf("Conceito: %c\n", conceito);
    return 0;
}