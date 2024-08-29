#include <stdio.h>
#include <stdbool.h>

void mostrar_opcoes() {
    printf("1 - Saudação no início do dia\n");
    printf("2 - Saudação no meio do dia\n");
    printf("3 - Saudação no final do dia\n");
    printf("0 - Sair\n");
}

int main(){
    printf("Exemplo com menu usando switch!\n");
    bool sair = false;
    while (!sair) {
	mostrar_opcoes();
        printf("ESCOLHA UMA OPÇÃO: ");
        int op;
        scanf("%d", &op);
        switch (op) {
        case 1: printf("Bom dia mesmo! \n\n"); break;
        case 2: printf("Boa tarde mesmo! \n\n"); break;
        case 3: printf("Boa noite mesmo! \n\n"); break;
        case 0: sair = true; break;
        default: printf("OPÇÃO INVÁLIDA!\n\n"); break;
        }
    }
    return 0;
}
