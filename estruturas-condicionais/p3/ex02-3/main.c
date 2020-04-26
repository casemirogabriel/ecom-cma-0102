#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%f%f", &n1, &n2);

    if (n2 != 0) {
        float divisao = n1 / n2;
        printf("Quociente: %f\n", divisao);
    }

    return 0;
}
