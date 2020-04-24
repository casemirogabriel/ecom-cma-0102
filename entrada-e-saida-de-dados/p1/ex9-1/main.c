#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;

    printf("Digite o 1o numero: ");
    scanf("%i", &n1);

    printf("Digite o 2o numero: ");
    scanf("%i", &n2);

    printf("Digite o 3o numero: ");
    scanf("%i", &n3);

    printf("Digite o 4o numero: ");
    scanf("%i", &n4);

    printf("Digite o 5o numero: ");
    scanf("%i", &n5);

    int soma = n1 + n2 + n3 + n4 + n5;
    printf("Soma dos 5 valores: %i\n", soma);

    return 0;
}
