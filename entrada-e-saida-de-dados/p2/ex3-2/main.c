#include <stdio.h>

int main() {
    int domestica, baba;

    printf("PAGAMENTO SEM TROCO\n");

    printf("1o valor: ");
    scanf("%i", &domestica);

    printf("2o valor: ");
    scanf("%i", &baba);

    domestica % 5 == 0 ? (domestica += 0) : (domestica += 5 - domestica % 5);
    baba % 5 == 0 ? (baba += 0) : (baba += 5 - baba % 5);

    int n100 = domestica / 100 + baba / 100;
    int n50 = domestica % 100 / 50 + baba % 100 / 50;
    int n20 = domestica % 100 % 50 / 20 + baba % 100 % 50 / 20;
    int n10 = domestica % 100 % 50 % 20 / 10 + baba % 100 % 50 % 20 / 10;
    int n5 = domestica % 100 % 50 % 20 % 10 / 5 + baba % 100 % 50 % 20 % 10 / 5;

    printf("Notas: %i x R$100,00; %i x R$50,00; %i x R$20,00; %i x R$10,00; %i x R$5,00", n100, n50, n20, n10, n5);

    return 0;
}
