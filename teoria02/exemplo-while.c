#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número par: ");
    scanf("%d", &num);

    while (num % 2 != 0){
        printf("Digite um número par: ");
        scanf("%d", &num);
    } 
    
    printf("Obrigado por digitar um número par!\n");
    return 0;
}