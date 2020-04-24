#include <stdio.h>

int main() {
    float kw;

    printf("Quantidade de kW consumidos: ");
    scanf("%f", &kw);

    float valor_conta = 1.18 * (0.12 * kw);
    printf("Valor da conta de luz: R$ %.2f\n", valor_conta);

    return 0;
}
