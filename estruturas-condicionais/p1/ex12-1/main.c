#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor: ");
    scanf("%i", &n);

    if (n >= 0) {
        printf("%i\n", n);
    } else {
        printf("Tem mais uma chance para digitar: ");
        scanf("%i", &n);

        if (n >= 0) {
            printf("%i\n", n);
        } else  {
            printf("0\n");
        }
    }

    return 0;
}
