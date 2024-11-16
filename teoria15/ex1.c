#include <stdio.h>

int main() {
    int a = 45;
    int b = a;
    printf("a = %d; b = %d\n", a, b);
    b = 54;
    printf("a = %d; b = %d\n", a, b);
    return 0;
}