#include <stdio.h>

int main() {
    int dia;

    printf("Digite um dia referente a um dia da semana: ");
    scanf("%i", &dia);

    switch (dia) {
        case 1:
        case 7:
            printf("Fim de semana\n");
            break;

        case 2 ... 6:
            printf("Dia util\n");
            break;

        default:
            printf("Dia invalido\n");
    }

    return 0;
}
