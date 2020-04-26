#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    if ( n % 6 == 0 && n % 5 != 0) {
        printf("E divisivel por 2 e por 3 simultaneamente, mas nao por 5\n");
    }

    return 0;
}
