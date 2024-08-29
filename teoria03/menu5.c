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

void bomDia(){
	printf("########\n");
	printf("Bom dia!\n");
	printf("########\n");
}

void boaTarde(){
	printf("#########\n");
	printf("Bom tarde!\n");
	printf("#########\n");
}

void boaNoite(){
	printf("##########\n");
	printf("Bom noite!\n");
	printf("##########\n");
}

bool tratar(int op) {
	bool ret = false;
        switch (op) {
	case 1: bomDia(); break;
        case 2: boaTarde(); break;
        case 3: boaNoite(); break;
        case 0: ret = true; break;
        default: printf("OPÇÃO INVÁLIDA!\n\n"); break;
        }
	return ret;
}

int main(){
    printf("Exemplo com menu usando switch e função com retorno!\n");
    bool sair = false;
    while (!sair) {
        int op = menu();
	sair = tratar(op);
    }
    return 0;
}