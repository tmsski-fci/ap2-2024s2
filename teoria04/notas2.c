#include <stdio.h>

int main(){
    float notas[3];
    

    printf("entre a 1a nota: ");
    scanf("%f",&notas[0]);

    printf("entre a 2a nota: ");
    scanf("%f",&notas[1]);

    printf("entre a 3a nota: ");
    scanf("%f",&notas[2]);

    float media = (notas[0] + notas[1] + notas[2])/3;

    printf("media: %f\n",media);


    return 0;
}