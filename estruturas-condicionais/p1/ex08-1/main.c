#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if (idade < 13) {
        printf("Crianca\n");
    } else {
        if (idade < 20) {
            printf("Adolescente\n");
        } else {
            if (idade < 65) {
                printf("Adulto\n");
            } else {
                printf("Idoso\n");
            }
        }
    }

    return 0;
}
