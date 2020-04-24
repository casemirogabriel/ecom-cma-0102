#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("Digite outro numero: ");
    scanf("%i", &n2);

    int soma = n1 + n2;
    printf("Soma: %i\n", soma);

    return 0;
}
