#include <stdio.h>

int main(){
    float notas[3];
    
    for (int i = 0; i < 3; i++){
        printf("entre a %da nota: ", i + 1);
        scanf("%f",&notas[i]);
    }

    float media = (notas[0] + notas[1] + notas[2])/3;

    printf("media: %f\n",media);


    return 0;
}