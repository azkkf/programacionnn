#include <stdio.h>

int main () {

    float ar, cir;
    printf("Digite o valor do raio de um circulo: ", ar);
    scanf("%f", &ar, &cir);

    cir = 3.141592 * ar;

    printf("A area do circulo e de: %.2f", cir);

}