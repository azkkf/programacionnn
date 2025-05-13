#include <stdio.h>

int main (){

    int a, b, c, d;
    float x;

    printf("Digite quatro numeros:");

    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%f", &x);
    
    x = (float)(a + b + c + d) / 4;

    printf("A media aritmetica destes numeros e: %.2f", x);

}