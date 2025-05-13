#include <stdio.h>

int main () {

    int salario, valor;
    printf("Digite o valor do seu salario bruto e a prestacao do emprestimo: ");
    scanf("%d %d", &salario, &valor);

    if (valor > salario * 0.20) {
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido.");
    }

}