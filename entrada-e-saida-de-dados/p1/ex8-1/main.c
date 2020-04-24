#include <stdio.h>

int main() {
    float c, l, a;

    printf("Digite o comprimento da caixa em cm: ");
    scanf("%f", &c);

    printf("Digite a largura da caixa em cm: ");
    scanf("%f", &l);

    printf("Digite a altura da caixa em cm: ");
    scanf("%f", &a);

    float volume = c * l * a;
    printf("Volume da caixa: %.2f cm^3\n", volume);

    return 0;
}
