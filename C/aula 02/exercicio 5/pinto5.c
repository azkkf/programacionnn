#include <stdio.h>

int main (){

    int idade, ano, x;
    printf("Diga a idade e o ano atual: ", idade, ano);
    scanf("%d %d", &idade, &ano);
    scanf("%d", &x);

    x = ano - idade;
    printf("O ano em que voce nasceu e: %d", x);

    return 0;
}