#include <stdio.h>

int main (){

    char a;
    int b;
    float c;
    scanf("%c %d %f", &a, &b, &c);
    printf("Digite uma letra, um numero inteiro e um numero real:", a, b, c);
    printf("Suas letras separadas por espaco: %c %d %.1f\n", a, b, c);
    printf("Suas letras separadas por hifen: %c-%d-%.1f\n", a, b, c);
    printf("Suas letras separadas por linha: \n%c\n%d\n%.1f\n", a, b, c);
}