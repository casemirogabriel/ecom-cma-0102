#include <stdio.h>

int main() {
    float distancia, combustivel_gasto;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustivel gasto em l: ");
    scanf("%f", &combustivel_gasto);

    float consumo_medio = combustivel_gasto / distancia;
    printf("Consumo medio: %.2f l/km\n", consumo_medio);

    return 0;
}
