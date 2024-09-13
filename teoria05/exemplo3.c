#include <stdio.h>

int main() {
    char c;
    printf("Letra inicial: ");
    c = getchar();
    for (int i = 0; i < 27; i++) {
        printf("%c : %d \n", c+i, c+i);
    }
    printf("\n");
    return 0;
}