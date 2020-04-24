#include <stdio.h>

int main() {
    float n1, n2;
    char operacao;

    printf("Digte dois numeros e um caracter de operacao matematica: ");
    scanf("%f%f%c", &n1, &n2, &operacao);

    float resultado;

    if (operacao == '+') {
        resultado = n1 + n2;
    } else if (operacao == '-') {
        resultado = n1 - n2;
    } else if (operacao == '*') {
        resultado = n1 * n2;
    } else if (operacao == '/') {
        resultado = n1 / n2;
    }

    printf("%f %c %f = %f\n", n1, operacao, n2, resultado);

    return 0;
}
