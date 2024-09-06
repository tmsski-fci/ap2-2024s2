#include <stdio.h>

float soma(float v[], int n) {
    float s = 0;
    for (int i=0; i<n; i++) {
        s += v[i];
    }
    return s;
}


int main(){

    int QTDE;
    printf("Quantidade de notas: ");
    scanf("%d", &QTDE);

    float notas[QTDE];

    for (int i = 0; i < QTDE; i++){
        printf("entre a %da nota: ", i + 1);
        scanf("%f",&notas[i]);
    }

    float media = soma(notas, QTDE)/QTDE;

    printf("media: %f\n",media);

    return 0;
}