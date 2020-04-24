#include <stdio.h>

int main() {
    float salario_atual, porcentagem;

    printf("Digite o salario atual em reais: ");
    scanf("%f", &salario_atual);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem);

    float novo_salario = salario_atual * (1 + porcentagem / 100);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
