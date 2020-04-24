#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite o coeficiente a da equacao de 2o grau: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b da equacao de 2o grau: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c da equacao de 2o grau: ");
    scanf("%f", &c);

    float delta = b * b - 4 * a * c;
    if (delta >= 0) {
        float x1, x2;

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raizes reais: %f e %f\n", x1, x2);
    } else {
        printf("Nao ha solucao real\n");
    }

    return 0;
}
