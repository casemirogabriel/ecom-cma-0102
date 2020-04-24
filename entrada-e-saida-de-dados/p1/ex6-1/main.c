#include <stdio.h>

int main() {
    float c;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &c);

    float f = (9 * c + 160) / 5;
    printf("Temperatura em Fahrenheit: %.2f graus\n", f);

    return 0;
}
