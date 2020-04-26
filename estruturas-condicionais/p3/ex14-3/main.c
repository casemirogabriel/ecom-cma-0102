#include <stdio.h>

int main() {
    int mes;

    printf("Digite um numero referente a um mes: ");
    scanf("%i", &mes);

    switch (mes) {
        case 2:
            printf("28 dias\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 dias\n");
            break;

        default:
            printf("31 dias\n");
    }

    return 0;
}
