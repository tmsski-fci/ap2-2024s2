#include <stdio.h>
#include <string.h>

int main() {
    char prog1[20] = "Lucas";
    char prog2[20] = "Lucas Santacruz";
    char *prog3;
    prog3 = prog1;
    printf("%s é um programador C!\n", prog1);
    printf("%s é um programador C!\n", prog2);
    printf("%s é um programador C!\n", prog3);
    printf("\n");
    
    return 0;
}