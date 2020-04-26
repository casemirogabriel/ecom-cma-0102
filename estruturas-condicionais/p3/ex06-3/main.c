#include <stdio.h>

int main() {
    int media;

    printf("Digite a media do aluno: ");
    scanf("%i", &media);

    switch (media) {
        case 0 ... 49:
            printf("Conceito D\n");
            break;

        case 50 ... 69:
            printf("Conceito C\n");
            break;

        case 70 ... 89:
            printf("Conceito B\n");
            break;

        case 90 ... 100:
            printf("Conceito A\n");
            break;

        default:
            printf("\n");
    }

    return 0;
}
