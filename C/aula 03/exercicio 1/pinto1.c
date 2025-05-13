#include <stdio.h>

int main () {

    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f%f", &a, &b);

    if (a > b) {
        printf("O maior numero e %.2f", a);
    } else if (b > a) {
        printf("O maior numero e: %.2f", b);
    } else {
        printf("Os numeros sao iguais.");
    }

}