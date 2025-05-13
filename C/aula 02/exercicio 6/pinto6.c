#include <stdio.h>

int main (){

    float km, ms;
    printf("Diga uma velocidade em km/h, e ela sera convertida em m/s: ", km);
    scanf("%f %f", &km, &ms);
    ms = km / 36;

    printf("A velocidade de %.1fkm/h, em m/s e: %.3f", km, ms);

}