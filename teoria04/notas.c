#include <stdio.h>

int main(){
    float a,b,c;
    

    printf("entre a 1a nota: ");
    scanf("%f",&a);

    printf("entre a 2a nota: ");
    scanf("%f",&b);

    printf("entre a 3a nota: ");
    scanf("%f",&c);

    float media = (a+b+c)/3;

    printf("media: %f\n",media);


    return 0;
}