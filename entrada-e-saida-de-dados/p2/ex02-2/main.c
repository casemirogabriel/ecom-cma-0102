#include <stdio.h>

int main() {
    printf("SISTEMA DE EQUACOES\n");

    float soma, diferenca;

    printf("Digite o valor da soma e da diferenca entre dois numeros: ");
    scanf("%f%f", &soma, &diferenca);

    printf("x + y = %f\n", soma);
    printf("x - y = %f\n", diferenca);

    float x, y;

    x = (soma + diferenca) / 2;
    y = soma - x;

    printf("Solucao:\n");
    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}
