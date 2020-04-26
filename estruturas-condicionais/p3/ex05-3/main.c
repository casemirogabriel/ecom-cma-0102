#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &n1, &n2);

    printf("Valores ");
    if (n1 > 0 && n2 > 0) {
        printf("sao ");
    } else {
        printf("in");
    }
    printf("validos\n");

    return 0;
}
