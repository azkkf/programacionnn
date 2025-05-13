/*
10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/

#include <stdio.h>

int main (){

    int dia, mes, ano;
    printf("Digite nessa ordem, um dia, um mes, e um ano:");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("A sua data e: %d/%d/%d.", dia, mes, ano);

}