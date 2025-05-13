#include <stdio.h>
#include <math.h>

int main () {

    float numero;
    printf("Digite um numero positivo: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O numero digitado ao quadrado e: %.2f\n", numero * numero);
        printf("A raiz quadrada do numero e: %.2f", sqrt(numero));
    } else {
        printf("Este nao e um numero positivo.");
    }

}