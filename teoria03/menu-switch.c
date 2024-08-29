#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Exemplo com menu usando switch!\n");

    bool sair = false;
    while (!sair) {
        printf("1 - Saudação no início do dia\n");
        printf("2 - Saudação no meio do dia\n");
        printf("3 - Saudação no final do dia\n");
        printf("0 - Sair\n");
        printf("ESCOLHA UMA OPÇÃO: ");
        int op;
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Bom dia! \n\n");
            break;
        case 2:
            printf("Boa tarde! \n\n");
        case 3:
            printf("Boa noite! \n\n");
            break;
        case 0:
            sair = true;
            break;
        default:
            printf("OPÇÃO INVÁLIDA!\n\n");
            break;
        }
    }
    return 0;
}