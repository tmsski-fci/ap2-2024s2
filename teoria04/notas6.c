#include <stdio.h>

int main(){
    int qtde;

    printf("Quantidade de notas: ");
    scanf("%d", &qtde);

    float notas[qtde];
    float soma=0;

    for (int i = 0; i < qtde; i++){
        printf("entre a %da nota: ", i + 1);
        scanf("%f",&notas[i]);
        soma += notas[i];
    }

    float media = soma/qtde;

    printf("media: %f\n",media);

    return 0;
}