#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo de origem do produto: ");
    scanf("%i", &codigo);

    printf("O produto veio de ");
    switch (codigo) {
        case 1 ... 20:
            printf("Europa\n");
            break;

        case 21 ... 40:
            printf("Asia\n");
            break;

        case 41 ... 60:
            printf("America\n");
            break;

        case 61 ... 80:
            printf("Africa\n");
            break;

        default:
            printf("Paraguai\n");
    }

    return 0;
}
