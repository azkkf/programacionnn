#include <stdio.h>

int main () {

    int par;
    printf("Digite um numero inteiro: ");
    scanf("%d", &par);

    if (par % 2 == 0) {
        printf("O numero %d e par", par);
    } else if (par % 2 != 0) {
        printf("O numero %d e impar", par);
    }
    

}