#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    float dobro = valor * 2, triplo = valor * 3, quadrado = valor * valor;
    printf("Dobro: %f\nTriplo: %f\nQuadrado: %f\n", dobro, triplo, quadrado);

    return 0;
}
