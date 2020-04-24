#include <stdio.h>

int main() {
    int opcao;

    printf("Formas de pagamento:\n");
    printf("1-A vista\n2-Cheque para trinta dias\n3-Em duas vezes\n4-Em tres vezes\n5-Em quatro vez\n6-A partir de 5 vezes\n");
    printf("\nEntre com sua opcao: ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Desconto de 20%%\n");
            break;

        case 2 ... 4:
            printf("Mesmo preco a vista\n");
            break;

        case 5:
            printf("Juros de 3%% ao mes\n");
            break;

        case 6:
            printf("Juros de 5%% ao mes\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
