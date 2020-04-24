#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    int soma = n1 + n2;
    printf("%i + %i = %i\n", n1, n2, soma);

    int subtracao = n1 - n2;
    printf("%i - %i = %i\n", n1, n2, subtracao);

    int multiplicacao = n1 * n2;
    printf("%i * %i = %i\n", n1, n2, multiplicacao);

    int divisao = n1 / n2;
    printf("%i / %i = %i\n", n1, n2, divisao);

    int resto = n1 + n2;
    printf("%i %% %i = %i\n", n1, n2, resto);

    return 0;
}
