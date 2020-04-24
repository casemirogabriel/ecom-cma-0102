#include <stdio.h>

int main() {
    int intervalo;

    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%i", &intervalo);

    int horas = intervalo / 3600;
    int minutos = intervalo % 3600 / 60;
    int segundos = intervalo % 3600 % 60;

    printf("%ih %imin %is\n", horas, minutos, segundos);

    return 0;
}
