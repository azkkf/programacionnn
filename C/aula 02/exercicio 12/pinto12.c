#include <stdio.h>
#include <math.h>

int main (){

    float altura, raio, volume;
    printf("Digite a altura e o raio de um cilindro circular: ", altura, raio);
    scanf("%f %f", &altura, &raio);

    volume = (3.141592 * pow(raio,2)) * altura;
    printf("O volume deste cilindro e de: %.2f", volume);

}