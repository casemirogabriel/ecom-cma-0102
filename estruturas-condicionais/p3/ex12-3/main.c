#include <stdio.h>

int main() {
    float n1, n2, n3;
    float mai, med, men;

    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        mai = n1;

        if (n2 > n3) {
            med = n2;
            men = n3;
        } else {
            med = n3;
            men = n2;
        }
    } else if (n1 > n2) {
        mai = n3;
        med = n1;
        men = n2;
    } else if (n1 > n3) {
        mai = n2;
        med = n1;
        men = n3;
    } else {
        men = n1;

        if (n2 > n3) {
            mai = n2;
            med = n3;
        } else {
            mai = n3;
            med = n2;
        }
    }

    printf("%f < %f < %f\n", men, med, mai);

    return 0;
}
