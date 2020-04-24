#include <stdio.h>

int main() {
    float raio, altura;

    printf("Digite o raio da base da lata em cm: ");
    scanf("%f", &raio);

    printf("Digite a altura da lata em cm: ");
    scanf("%f", &altura);

    float volume = 3.14 * raio * raio * altura;
    printf("Volume da lata: %.2f cm^3\n", volume);

    return 0;
}
