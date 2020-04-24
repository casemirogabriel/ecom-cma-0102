#include <stdio.h>

int main() {
    float salario_bruto, valor_hora_extra;
    int horas_extras;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Digite o valor das horas extras em reais: ");
    scanf("%f", &valor_hora_extra);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%i", &horas_extras);

    float salario_liquido = 0.92 * (salario_bruto + valor_hora_extra * horas_extras);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
