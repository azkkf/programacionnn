#include <stdio.h>

int main () {

    int p, s, t, valor;
    scanf("%d", &p, &s, &t);

    valor = 780000;
    p = 780000 * 0.46;
    s = 780000 * 0.32;
    t = 780000 * 0.22;

    printf("O valor distribuido entre os tres e de: \nPrimeiro: %d\nSegundo: %d\nTerceiro: %d", p, s, t);

}