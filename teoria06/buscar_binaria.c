#include <stdio.h>

int buscar_binaria(int RAs[], int n, int RA) {
    // iniciar a área da busca usando menor e maior índices
    int maior, menor;
    // menor <- 0
    menor = 0;
    // maior <- n-1
    maior = n-1;
    // enquanto não esgotar a área de busca
    while (maior >= menor) {
        // calcular a posição do meio
        int meio = (maior + menor)/2;
        printf("menor = %d\n", menor);
        printf("meio = %d\n", meio);
        printf("maior = %d\n", maior);
        printf("-\n");
        // verificar se o elemento que está no meio é o que está sendo buscado
        if (RAs[meio] == RA) {
            // se for, retornar a resposta
            return meio;
        }
        else {
            // se não for, atualizar a área de busca 
            if (RAs[meio] > RA) {
                maior = meio - 1;
            }
            else {
                menor = meio + 1;
            }
        }
    }

    // retorna que não encontrou
    return -1;
}

int main() {
    printf("BUSCA BINÁRIA!\n");
    int N = 6;
    int alunos[] = {1001000117, 1001000218, 1001000304, 1001000432, 1001000538, 1001000698};
    printf("RA do aluno a ser buscado: ");
    int ra;
    scanf("%d", &ra);
    int posicao = buscar_binaria(alunos, N, ra); 
    printf("O aluno de RA %d fez a prova na posição %d\n", ra, posicao);
}