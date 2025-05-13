#include <stdio.h>

int main () {

    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    if (a > b){
        printf("O numero %.2f e maior", a);
    } else if (b > a){
        printf("O numero %.2f e maior", b);
    } else {
        printf("Os numeros sao iguais");
    }

}