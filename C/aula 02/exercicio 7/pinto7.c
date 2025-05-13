#include <stdio.h>

int main () {

    double reais, dolar, cotacao;
    printf("Digite um valor em reais, e ele sera transformado em dolares: ", reais);
    scanf("%lf", &reais);
    
    cotacao = 5.63;
    dolar = reais / cotacao;

    printf("A quantidade em dolares e aproximadamente: %.2lf", dolar);
}