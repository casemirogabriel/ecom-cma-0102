#include <stdio.h>

int main() {
    float x, y, z;

    printf("Digite 3 valores de comprimento: ");
    scanf("%f%f%f", &x, &y, &z);

    if (!((x < y + z) && (y < z + x) && (z < x + y))) {
        printf("Nao ");
    }
    printf("Formam um triangulo\n");

    return 0;
}
