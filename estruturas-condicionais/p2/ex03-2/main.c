#include <stdio.h>

int main() {
    float preco;
    int intervalo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 2.00) {
        intervalo = 1;
    } else if (preco > 2.00 && preco <= 5.00) {
        intervalo = 2;
    } else if (preco > 5.00 && preco <= 20.00) {
        intervalo = 3;
    } else {
        intervalo = 0;
    }

    switch (intervalo) {
        case 1:
            preco += 0.15;
            break;

        case 2:
            preco += 0.21;
            break;

        case 3:
            preco += 1.71;
            break;

        default:
            preco += 2.35;
    }

    printf("Preco final: R$ %.2f\n", preco);

    return 0;
}
