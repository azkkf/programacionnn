/*
Faça um programa que leia três caracteres do tipo char e depois os imprima um em
cada linha. Use um único comando printf() para isso.
*/

#include <stdio.h>

int main (){

    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    printf("\n%c\n%c\n%c", a, b, c);

}