#include <stdio.h>

int main() {
    float altura;
    char sexo;

    printf("Digite sua altura e seu sexo (M ou F): ");
    scanf("%f %c", &altura, &sexo);

    float peso_ideal;

    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
    } else {
        peso_ideal = (62.1 * altura) - 44.7;
    }

    printf("Seu peso ideal e: %f kg\n", peso_ideal);

    return 0;
}
