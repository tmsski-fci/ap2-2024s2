#include <stdio.h>

int main() {
    int num;
    
    do {
        printf("Digite um número par: ");
        scanf("%d", &num);
    } 
    while (num % 2 != 0);
    
    printf("Obrigado por digitar um número par!\n");
    return 0;
}