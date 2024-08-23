#include <stdio.h>

int main(){
    int i;

    printf("Impressão de 1 a 10:\n");
    for(i = 1; i < 11; i++){
        printf("%d ",i);
    }
    printf("\n");

    printf("Contagem regressiva de 10 até 0:\n");
    for(i = 10; i > -1; i--){
        printf("%d ",i);
    }
    printf("\n");

    printf("Dez primeiras potências de 2:\n");
    for (i = 1;i < 1024;i*=2){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
