#include <stdio.h>

int main() {
    int matricula;

    printf("Digite a matricula do funcionario: ");
    scanf("%i", &matricula);

    int dia = (matricula - 1) / 6 + 2;
    int hora = (matricula - 1) % 6 + 8;

    printf("%ia-feira as %i:00 horas\n", dia, hora);

    return 0;
}
