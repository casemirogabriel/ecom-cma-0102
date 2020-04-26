#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if (ano % 4 == 0) {
        printf("Ano bissexto\n");
    }

    return 0;
}
