#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6;

    printf("Digite o 1o numero: ");
    scanf("%f", &n1);

    printf("Digite o 2o numero: ");
    scanf("%f", &n2);

    printf("Digite o 3o numero: ");
    scanf("%f", &n3);

    printf("Digite o 4o numero: ");
    scanf("%f", &n4);

    printf("Digite o 5o numero: ");
    scanf("%f", &n5);

    printf("Digite o 6o numero: ");
    scanf("%f", &n6);

    float media = (n1 + n2 + n3 + n4 + n5 + n6) / 6;
    printf("Media dos 6 valores: %.2f\n", media);

    return 0;
}
