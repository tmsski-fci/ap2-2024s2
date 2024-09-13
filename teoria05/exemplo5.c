#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[20];
    palavra[0] = 'J';
    palavra[1] = 'a';
    palavra[2] = 'v';
    palavra[3] = 'a';
    palavra[4] = ' ';
    palavra[5] = 'C';
    palavra[6] = ' ';
    palavra[7] = 'R';
    // palavra[4] = '\0';
    printf("Palavra: %s\n", palavra);
    return 0;
}