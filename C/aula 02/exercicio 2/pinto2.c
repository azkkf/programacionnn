#include <stdio.h>

int main (){

    float numero, quinta;

    printf("Digite um numero divisivel por 5:", numero);
    scanf("%f", &numero);
    quinta = (int) numero / 5;
    printf("A quinta parte deste numero e: %.1f", quinta);

}