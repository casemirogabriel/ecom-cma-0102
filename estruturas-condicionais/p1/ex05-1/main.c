#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    if (n % 2 == 0) {
        printf("O numero e par\n");
    } else {
        printf("O numero e impar\n");
    }

    return 0;
}
