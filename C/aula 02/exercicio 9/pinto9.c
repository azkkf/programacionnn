#include <stdio.h>

int main () {

    float an, ra;
    printf("Digite um angulo em graus, e o mesmo sera convertido em radianos: ", an);
    scanf("%f", &an);

    ra = (an * 3.141592) / 180;

    printf("O angulo convertido em radianos e: %.2f", ra);

}