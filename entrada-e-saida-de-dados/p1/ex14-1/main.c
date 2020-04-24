#include <stdio.h>

int main() {
    float salario_minimo, salario_funcionario;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    float salarios = salario_funcionario / salario_minimo;
    printf("O funcionario recebe %.2f salarios minimos\n", salarios);

    return 0;
}
