#include <stdio.h>

int main () {

    int c, d, u, x;
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &x);

    c = (int) x / 100;
    d = (int) (x / 10) - c * 10;
    u = (x % 100) - d * 10; 

    printf("O inverso do numero digitado e: %d%d%d", u, d, c);
}