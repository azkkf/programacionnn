#include <stdio.h>

int main () {

    float celsius, fh;
    printf("Apresente um valor em graus celsius, e ele sera transformado em Fahrenheit: ", celsius);
    scanf("%f", &celsius);

    fh = celsius * (9.0 / 5.0) + 32.0;
    printf("A temperatura em graus Fahrenheit e de: %.2f", fh);

}