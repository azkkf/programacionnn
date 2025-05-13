#include <stdio.h>
#include <math.h>

int main () {

    float a, b, h;
    printf("Digite dois valores, a e b, e sera calculado a hipotenusa: ", a, b);
    scanf("%f %f", &a, &b);

    h = sqrt(pow(a,2) + pow(b,2));

    printf ("A hipotenusa dos numeros inseridos e: %.2f", h);

}