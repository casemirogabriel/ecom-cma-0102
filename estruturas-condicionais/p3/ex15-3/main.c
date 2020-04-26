#include <stdio.h>

int main() {
    float n;
    int parte_inteira;

    printf("Digite um numero: ");
    scanf("%f", &n);

    parte_inteira = n;

    float parte_fracionaria = n - parte_inteira;

    if (parte_fracionaria >= 0.5) {
        parte_inteira++;
    }

    printf("Numero arredondado: %i\n", parte_inteira);

    return 0;
}
