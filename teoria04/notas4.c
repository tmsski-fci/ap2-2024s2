#include <stdio.h>
#define QTDE 4

int main(){
    float notas[QTDE];
    float soma=0;

    for (int i = 0; i < QTDE; i++){
        printf("entre a %da nota: ", i + 1);
        scanf("%f",&notas[i]);
        soma += notas[i];
    }

    float media = soma/QTDE;

    printf("media: %f\n",media);

    return 0;
}