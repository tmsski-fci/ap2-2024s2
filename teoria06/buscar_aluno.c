#include <stdio.h>

int buscar(int RAs[], int n, int RA) {
    for (int i=0; i<n; i++) {
        if (RAs[i] == RA) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N = 6;
    int alunos[] = {10438275, 10433705, 10439243, 10436050, 10101010, 10427397};
    printf("RA do aluno a ser buscado: ");
    int ra;
    scanf("%d", &ra);
    int posicao = buscar(alunos, N, ra); 
    printf("O aluno de RA %d fez a prova na posição %d\n", ra, posicao);
}