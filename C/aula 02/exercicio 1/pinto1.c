#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Exibe o antecessor e o sucessor
    printf("O antecessor de %d e %d e o sucessor e %d.\n", numero, antecessor, sucessor);

    return 0;
}