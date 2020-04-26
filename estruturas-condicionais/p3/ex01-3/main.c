#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%i%i", &n1, &n2);

    printf("O primeiro numero e ");
    if (n1 > n2) {
        printf("maior que o segundo\n");
    } else if (n1 < n2) {
        printf("menor que o segundo\n");
    } else {
        printf("igual ao segundo\n");
    }

    return 0;
}
