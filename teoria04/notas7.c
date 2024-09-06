#include <stdio.h>
#define QTDE 4

float soma(float v[QTDE]) {
    float s = 0;
    for (int i=0; i<QTDE; i++) {
        s += v[i];
    }
    return s;
}


int main(){

    float notas[QTDE];

    for (int i = 0; i < QTDE; i++){
        printf("entre a %da nota: ", i + 1);
        scanf("%f",&notas[i]);
    }

    float media = soma(notas)/QTDE;

    printf("media: %f\n",media);

    return 0;
}