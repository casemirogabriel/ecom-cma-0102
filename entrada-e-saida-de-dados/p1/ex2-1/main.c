#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("Digite outro numero: ");
    scanf("%i", &n2);

    int soma = n1 + n2;
    printf("Soma: %i\n", soma);

    int subtracao = n1 - n2;
    printf("Subtracao: %i\n", subtracao);

    float divisao = (float) n1 / n2;
    printf("Divisao: %f\n", divisao);

    int multiplicacao = n1 * n2;
    printf("Multiplicacao: %i\n", multiplicacao);

    return 0;
}
