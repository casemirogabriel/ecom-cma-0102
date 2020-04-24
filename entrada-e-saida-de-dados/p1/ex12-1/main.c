#include <stdio.h>

int main() {
    float valor_veiculo, ipva;

    printf("Digite o valor do veiculo em reais: ");
    scanf("%f", &valor_veiculo);

    printf("Digite o valor do IPVA em reais: ");
    scanf("%f", &ipva);

    float porcentagem = ipva / valor_veiculo * 100;
    printf("O IPVA de R$ %.2f corresponde a %.2f%% do valor do veiculo de R$ %.2f\n", ipva, porcentagem, valor_veiculo);

    return 0;
}
