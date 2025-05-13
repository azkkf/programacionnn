#include <stdio.h>

int main (){

    int numero1, numero2, numero3, x;
    printf("Digite tres valores inteiros:", numero1, numero2, numero3);
    scanf("%d%d%d", &numero1, &numero2, &numero3);

    x = numero1 + numero2 + numero3;

    printf("A soma dos numeros e: %d", x);

    return 0;
}