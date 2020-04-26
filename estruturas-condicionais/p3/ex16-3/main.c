#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, l3;

    printf("Digite o comprimento dos 3 lados de um triangulo: ");
    scanf("%f%f%f", &l1, &l2, &l3);

    float c1, c2, h;

    if (l1 == sqrt(pow(l2, 2) + pow(l3, 2))) {
        h = l1;
        c1 = l2;
        c2 = l3;

        printf("H = %f; C1 = %f; C2 = %f\n", h, c1, c2);
    }

    if (l2 == sqrt(pow(l1, 2) + pow(l3, 2))) {
        h = l2;
        c1 = l1;
        c2 = l3;

        printf("H = %f; C1 = %f; C2 = %f\n", h, c1, c2);
    }

    if (l3 == sqrt(pow(l1, 2) + pow(l2, 2))) {
        h = l3;
        c1 = l1;
        c2 = l2;

        printf("H = %f; C1 = %f; C2 = %f\n", h, c1, c2);
    }

    return 0;
}
