#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salario do funcionario em reais: ");
    scanf("%f", &salario);

    if (salario <= 200.0) {
        salario *= 1.13;
    } else if (salario > 200.0 && salario <= 400.0) {
        salario *= 1.11;
    } else if (salario > 400.0 && salario <= 800.0) {
        salario *= 1.09;
    } else if (salario > 800.0) {
        salario *= 1.07;
    }

    printf("Novo salario: R$%.2f\n", salario);

    return 0;
}
