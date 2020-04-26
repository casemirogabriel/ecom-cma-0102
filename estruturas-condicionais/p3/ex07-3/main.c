#include <stdio.h>

int main() {
    int codigo;
    float salario;

    printf("Codigos dos cargos\n");
    printf("1-Técnicos\n2-Gerentes\n3-Demais funcionarios\n");
    printf("Digite o codigo e o salario do funcionario: ");
    scanf("%i%f", &codigo, &salario);

    switch (codigo) {
        case 1:
            salario *= 1.5;
            printf("Novo salario: R$ %.2f\n", salario);
            break;

        case 2:
            salario *= 1.3;
            printf("Novo salario: R$ %.2f\n", salario);
            break;

        case 3:
            salario *= 1.2;
            printf("Novo salario: R$ %.2f\n", salario);
            break;

        default: printf("\n");
    }

    return 0;
}
