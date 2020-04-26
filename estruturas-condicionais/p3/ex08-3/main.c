#include <stdio.h>

int main() {
    char sinal;

    printf("Digite um sinal: ");
    scanf("%c", &sinal);

    switch (sinal) {
        case '<':
            printf("Sinal de menor\n");
            break;

        case '>':
            printf("Sinal de maior\n");
            break;

        case '=':
            printf("Sinal de igual\n");
            break;

        default: printf("Outro caracter\n");
    }

    return 0;
}
