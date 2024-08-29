#include <stdio.h>
#include <stdbool.h>

int menu() {
    printf("1 - Saudação no início do dia\n");
    printf("2 - Saudação no meio do dia\n");
    printf("3 - Saudação no final do dia\n");
    printf("0 - Sair\n");
    printf("ESCOLHA UMA OPÇÃO: ");
    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

int main(){
    printf("Exemplo com menu usando switch e função com retorno!\n");
    bool sair = false;
    while (!sair) {
        int op = menu();
        switch (op) {
        case 1: printf("# Bom dia mesmo! \n\n"); break;
        case 2: printf("# Boa tarde mesmo! \n\n"); break;
        case 3: printf("# Boa noite mesmo! \n\n"); break;
        case 0: sair = true; break;
        default: printf("OPÇÃO INVÁLIDA!\n\n"); break;
        }
    }
    return 0;
}
