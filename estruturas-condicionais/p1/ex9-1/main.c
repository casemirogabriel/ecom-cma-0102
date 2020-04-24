#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite dois numeros reais: ");
    scanf("%f%f", &n1, &n2);

    if (n1 > 0 && n2 > 0) {
        printf("Ambos os valores sao positivos\n");
    } else {
        printf("Ao menos um dos valores e negativo\n");
    }

    return 0;
}
