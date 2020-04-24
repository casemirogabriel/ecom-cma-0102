#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%i%i", &n1, &n2);

    printf("%i", n1);
    if (n1 % n2 != 0) {
        printf(" nao");
    }
    printf(" e divisivel por %i\n", n2);

    return 0;
}
