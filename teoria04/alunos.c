#include <stdio.h>

int main(){
    int qtde;
    int numAlunos;

    printf("Quantidade de alunos: ");
    scanf("%d", &numAlunos);
    printf("Quantidade de notas da disciplina: ");
    scanf("%d", &qtde);

    float notas[numAlunos][qtde];

    for (int aluno=0; aluno<numAlunos; aluno++) {
        float soma=0;

        for (int i = 0; i < qtde; i++){
            printf("entre a %da nota do %do aluno: ", i + 1, aluno + 1);
            scanf("%f",&notas[aluno][i]);
            soma += notas[aluno][i];
        }

        float media = soma/qtde;

        printf("media do %do aluno: %f\n\n", aluno+1, media);
    }
    return 0;
}