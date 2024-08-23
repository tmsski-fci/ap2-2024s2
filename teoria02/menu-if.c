#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Exemplo com menu!\n");

    bool sair = false;
    while (!sair) {
        printf("1 - Saudação no início do dia\n");
        printf("2 - Saudação no meio do dia\n");
        printf("3 - Saudação no final do dia\n");
        printf("0 - Sair\n");
        printf("ESCOLHA UMA OPÇÃO: ");
        int op;
        scanf("%d", &op);
        if (op == 1) { printf("BOM DIA!\n\n"); }
        else if (op == 2) { printf("BOA TARDE!\n\n"); }
        else if (op == 3) { printf("BOA NOITE!\n\n"); }
        else if (op == 0) { sair = true; }
        else { printf("OPÇÃO INVÁLIDA!\n\n"); }
    }
    return 0;
}