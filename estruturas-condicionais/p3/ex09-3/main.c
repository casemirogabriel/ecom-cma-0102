#include <stdio.h>
#include <math.h>

int main() {
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n < 0.0) {
        printf("O numero e negativo\n");
        n *= -1;
    } else if (n > 0.0) {
        printf("O numero e positivo\n");
    } else {
        printf("O numero e zero\n");
    }

    printf("Valor absoluto: %f\n", n);

    return 0;
}
