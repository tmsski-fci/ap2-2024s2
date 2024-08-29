#include <stdio.h>
#include <stdbool.h>

int menu();
void bomDia();
void boaTarde();
void boaNoite();
bool tratar(int op); 


int main(){
    printf("Exemplo com menu usando switch e função com retorno!\n");
    int op = menu();
    bool sucesso = tratar(op);
    if (sucesso) return 0;
    return -1;
}

int menu() {
    printf("1 - Saudação no início do dia\n");
    printf("2 - Saudação no meio do dia\n");
    printf("3 - Saudação no final do dia\n");
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
	bool ret = true;
        switch (op) {
	case 1: bomDia(); break;
        case 2: boaTarde(); break;
        case 3: boaNoite(); break;
        default: ret = false; printf("OPÇÃO INVÁLIDA!\n\n"); break;
        }
	return ret;
}


